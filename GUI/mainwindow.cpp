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
constexpr f32 SINGLE_JUMP_AMPLITUDE = 10;
constexpr u32 SINGLE_JUMP_ACIVATION_TICK = 50;

constexpr f32 RECTANGLE_AMPLITUDE = 15;
constexpr u32 RECTANGLE_PERIOD = 20;
constexpr f32 RECTANGLE_FILL = 0.5;

constexpr f32 SINUS_AMPLITUDE = 5;
constexpr u32 SINUS_PERIOD = 15;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
    generator(new SingleJumpGenerator(10,50)), timer(new QTimer()),
    feedback(new FeedbackLoop(PidModel(2.0f, 0.5f, 2.0f), ModelARX( {0.1f}, {0.1f}, 1.0f, 0.5f))),
    parameters(new Parameters(10,50,0))


{
    ui->setupUi(this);

    ui->kTextEdit->setText(QString::number(feedback->get_k()));
    ui->tTextEdit->setText(QString::number(feedback->get_t()));
    ui->tdTextEdit->setText(QString::number(feedback->get_td()));


    connect(ui->startStopButton, &QPushButton::clicked, this, &MainWindow::startStopSimulation);
    connect(timer,&QTimer::timeout,this,&MainWindow::tick);
    connect(ui->generatorComboBox,&QComboBox::currentIndexChanged,this, &MainWindow::changeGenerator);
    connect(ui->setRegulatorButton, &QPushButton::clicked, this, &MainWindow::changeRegulatorParameters);

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
    bool error;
    bool kValid = ui->kTextEdit->toPlainText().toFloat(&error);
    bool tValid = ui->tTextEdit->toPlainText().toFloat(&error);
    bool tdValid = ui->tdTextEdit->toPlainText().toFloat(&error);

    if (!kValid || !tValid || !tdValid)
    {
        QMessageBox::critical(this, "Błąd krytyczny", "Podane wartości muszą być liczbami.");
        return;
    }
    else
    {
        feedback->set_k(ui->kTextEdit->toPlainText().toFloat());
        feedback->set_t(ui->kTextEdit->toPlainText().toFloat());
        feedback->set_td(ui->kTextEdit->toPlainText().toFloat());
    }

}
