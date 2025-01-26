#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "generator.h"

#include "../logic/signal_generators/single_jump.hpp"
#include "../logic/signal_generators/square.hpp"
#include "../logic/signal_generators/sinus.hpp"



#include <QTimer>
#include <QMessageBox>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QValueAxis>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
    generator(new SingleJumpGenerator(0,0)), timer(new QTimer()),
    feedback(new FeedbackLoop(PidModel(0.0f, 0.0f, 0.0f), ModelARX( {0.4f, 0.0f, 0.0f}, {0.6f,0.0f,0.0f}, 0.0f, 0.1f))),
    parameters(new Parameters(2,2,0)), seriesError(new QLineSeries()),seriesSetPoint(new QLineSeries()),
    seriesFeedback(new QLineSeries()), seriesPIDResult(new QLineSeries()), chart(new QChart())


{
    ui->setupUi(this);

    ui->kTextEdit->setText(QString::number(feedback->get_k()));
    ui->tTextEdit->setText(QString::number(feedback->get_t()));
    ui->tdTextEdit->setText(QString::number(feedback->get_td()));

    std::vector <f32> a = feedback->get_a();
    std::vector <f32> b = feedback->get_b();

    ui->textEditA0->setText(QString::number(a[0]));
    ui->textEditA1->setText(QString::number(a[1]));
    ui->textEditA2->setText(QString::number(a[2]));

    ui->textEditB0->setText(QString::number(b[0]));
    ui->textEditB1->setText(QString::number(b[1]));
    ui->textEditB2->setText(QString::number(b[2]));

    ui->textEditDelay->setText(QString::number(feedback->get_delay()));

    //charts

    seriesError->setName("Uchyb regulacji");
    seriesSetPoint->setName("Wartość zadana");
    seriesFeedback->setName("Wartość regulowana");
    seriesPIDResult->setName("Sygnał sterujący");

    chart->addSeries(seriesError);
    chart->addSeries(seriesSetPoint);
    chart->addSeries(seriesFeedback);
    chart->addSeries(seriesPIDResult);

    chart->createDefaultAxes();

    QValueAxis* axisX = new QValueAxis();
    axisX->setRange(0, 1000);
    axisX->setTitleText("Czas (tick)");
    chart->setAxisX(axisX, seriesError);
    chart->setAxisX(axisX, seriesSetPoint);
    chart->setAxisX(axisX, seriesFeedback);
    chart->setAxisX(axisX, seriesPIDResult);

    QValueAxis* axisY = new QValueAxis();
    axisY->setRange(-1000, 1000);
    axisY->setTitleText("Wartość");
    chart->setAxisY(axisY, seriesError);
    chart->setAxisY(axisY, seriesSetPoint);
    chart->setAxisY(axisY, seriesFeedback);
    chart->setAxisY(axisY, seriesPIDResult);

    QFont font;
    font.setPixelSize(18);
    chart->setTitleFont(font);
    chart->setTitle("Wykres");

    chart->setTitleBrush(QBrush(Qt::black));
    chart->setFont(font);
    QChartView* chartView = new QChartView(chart);
    ui->chartLayout->addWidget(chartView);




    connect(ui->startStopButton, &QPushButton::clicked, this, &MainWindow::startStopSimulation);
    connect(timer,&QTimer::timeout,this,&MainWindow::tick);
    connect(ui->generatorComboBox,&QComboBox::currentIndexChanged,this, &MainWindow::changeGenerator);
    connect(ui->setRegulatorButton, &QPushButton::clicked, this, &MainWindow::changeRegulatorParameters);
    connect(ui->setCoefficientsButton, &QPushButton::clicked, this, &MainWindow::changeModelCoefficients);
    connect(ui->resetButton,&QPushButton::clicked,this,&MainWindow::reset);
    connect(ui->chartResetButton,&QPushButton::clicked,this,&MainWindow::chartReset);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startStopSimulation()
{
    if (ui->startStopButton->text() == "Start")
    {
        timer->start(100);
        ui->startStopButton->setText("Stop");
        ui->light->setPixmap(QPixmap(":/green.png"));
    }
    else
    {
        timer->stop();
        ui->startStopButton->setText("Start");
        ui->light->setPixmap(QPixmap(":/red.png"));
    }
}

void MainWindow::changeGenerator()
{

    if (ui->generatorComboBox->currentText() == "Skok jednostkowy")
    {
        parameters->type = GeneratorType::Single;
        QDialog* generatorDialog = new Generator(parameters,this);
        generatorDialog->exec();
        generator = new SingleJumpGenerator(parameters->zero, parameters->first);
    }
    else if (ui->generatorComboBox->currentText() == "Sygnał prostokątny")
    {
        parameters->type = GeneratorType::Rectangle;
        QDialog* generatorDialog = new Generator(parameters,this);
        generatorDialog->exec();
        generator = new RectangleSignalGenerator(parameters->zero, parameters->first, parameters->second);
    }
    else
    {
        parameters->type = GeneratorType::Sinus;
        QDialog* generatorDialog = new Generator(parameters,this);
        generatorDialog->exec();
        generator = new SinusSignalGenerator(parameters->zero,parameters->first );
    }

}
void MainWindow::changeModelCoefficients()
{
    float a0 = ui->textEditA0->toPlainText().toFloat();
    float a1 = ui->textEditA1->toPlainText().toFloat();
    float a2 = ui->textEditA2->toPlainText().toFloat();

    float b0 = ui->textEditB0->toPlainText().toFloat();
    float b1 = ui->textEditB1->toPlainText().toFloat();
    float b2 = ui->textEditB2->toPlainText().toFloat();

    float delay = ui->textEditDelay->toPlainText().toFloat();

    feedback->set_a({a0, a1, a2});
    feedback->set_a({b0, b1, b2});
    feedback->set_delay(delay);

}
void MainWindow::reset()
{
    feedback->reset();
}
void MainWindow::chartReset()
{
    seriesError->clear();
    seriesSetPoint->clear();
    seriesFeedback->clear();
    seriesPIDResult->clear();
    tickIndex = 0;
}

void MainWindow::tick()
{

    f32 setpoint = generator->generate(tickIndex);
    ui->setpointLabel->setText(QString::number(setpoint));
    tickIndex++;

    Last=feedback->run(setpoint,Last);
    ui->feedbackResult->setText(QString::number(Last));

    ui->errorLabel->setText(QString::number(feedback->get_error()));
    ui->pidResultLabel->setText(QString::number(feedback->get_pid_result()));

    seriesError->append(tickIndex,feedback->get_error());
    seriesSetPoint->append(tickIndex,setpoint);
    seriesFeedback->append(tickIndex,Last);
    seriesPIDResult->append(tickIndex,feedback->get_pid_result());
}
void MainWindow::changeRegulatorParameters()
{

    bool kValid, tValid, tdValid;

    float k = ui->kTextEdit->toPlainText().toFloat(&kValid);
    float t = ui->tTextEdit->toPlainText().toFloat(&tValid);
    float td = ui->tdTextEdit->toPlainText().toFloat(&tdValid);


    if (!kValid || !tValid || !tdValid)
    {
        QMessageBox::critical(this, "Błąd krytyczny", "Podane wartości muszą być liczbami.");
        return;
    }
    else
    {
        feedback->set_k(k);
        feedback->set_t(t);
        feedback->set_td(td);
    }

}
