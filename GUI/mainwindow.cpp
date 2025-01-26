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

//TODO add settings
//TODO handle exceptions from logic library

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
    generator(new SingleJumpGenerator(10,50)), timer(new QTimer()),
    feedback(new FeedbackLoop(PidModel(2.0f, 0.5f, 2.0f), ModelARX( {0.1f, 0.1f, 0.1f}, {0.1f,0.1f,0.1f}, 1.0f, 0.5f))),
    parameters(new Parameters(10,50,0))


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


    connect(ui->startStopButton, &QPushButton::clicked, this, &MainWindow::startStopSimulation);
    connect(timer,&QTimer::timeout,this,&MainWindow::tick);
    connect(ui->generatorComboBox,&QComboBox::currentIndexChanged,this, &MainWindow::changeGenerator);
    connect(ui->setRegulatorButton, &QPushButton::clicked, this, &MainWindow::changeRegulatorParameters);
    connect(ui->setCoefficientsButton, &QPushButton::clicked, this, &MainWindow::changeModelCoefficients);


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

void MainWindow::tick()
{

    f32 setpoint = generator->generate(tickIndex);
    ui->setpointLabel->setText(QString::number(setpoint));
    tickIndex++;

    Last=feedback->run(setpoint,Last);
    ui->feedbackResult->setText(QString::number(Last));

    ui->errorLabel->setText(QString::number(feedback->get_error()));
    ui->pidResultLabel->setText(QString::number(feedback->get_pid_result()));
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
