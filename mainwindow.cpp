#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>
#include <QFile>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , simulation(Simulation::get_instance())
{
    ui->setupUi(this);

    init();

    connect(&this->simulation, &Simulation::simulation_start, this, &MainWindow::simulation_start);
    connect(&this->simulation, &Simulation::simulation_stop, this, &MainWindow::simulation_stop);

    connect(this->ui->action_save_as, &QAction::triggered, this, &MainWindow::on_action_save_as);
    connect(this->ui->action_open, &QAction::triggered, this, &MainWindow::on_action_open);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_save_as(){
    qDebug() << "save as";

    std::vector<std::byte> data{this->simulation.serialize()};

    QString file_name = QFileDialog::getSaveFileName(this, "Save simulation", "", "Simulation files (*.dat)");

    QFile file(file_name);
    if (file.open(QIODevice::WriteOnly)){
        file.write(reinterpret_cast<const char*>(data.data()), data.size());
        file.close();
    }


    qDebug() << "saved";
}

void MainWindow::on_action_open(){
    qDebug() << "open";

    QString file_name = QFileDialog::getOpenFileName(this, "Open simulation", "", "Simulation files (*.dat)");

    QFile file(file_name);
    if (file.open(QIODevice::ReadOnly)){
        std::vector<std::byte> data(file.size());
        file.read(reinterpret_cast<char*>(data.data()), data.size());
        file.close();

        this->simulation.deserialize(data);
    }

    this->init();

    qDebug() << "opened";

}

void MainWindow::init(){
    // simulation

    // this->ui->simulation_ticks_per_second_input->setValue(this->simulation.get_ticks_per_second());

    this->ui->simulation_interval_input->setValue(this->simulation.get_interval());
    this->simulation.stop();

    this->ui->simulation_duration_input->setValue(this->simulation.durration);

    // pid

    this->ui->pid_kp_input->setValue(this->simulation.pid->get_kp());
    this->ui->pid_ti_input->setValue(this->simulation.pid->get_ti());
    this->ui->pid_td_input->setValue(this->simulation.pid->get_td());

    // generator

    this->ui->generator_amplitude_input->setValue(this->simulation.generator->get_amplitude());
    this->ui->generator_frequency_input->setValue(this->simulation.generator->get_frequency());
    this->ui->generator_generatortype_input->setCurrentIndex(static_cast<int>(this->simulation.generator->get_type()));

    // arx

    this->ui->arx_noise_input->setValue(this->simulation.arx->get_noise());
    this->ui->arx_noisetype_input->setCurrentIndex(static_cast<int>(this->simulation.arx->get_noise_type()));
    this->ui->arx_delay_input->setValue(this->simulation.arx->get_delay());

    QStringList a_values;

    for (double value : this->simulation.arx->get_a()){
        a_values.push_back(QString::number(value));
    }

    this->ui->arx_a_input->setText(a_values.join(","));

    QStringList b_values;

    for (double value : this->simulation.arx->get_b()){
        b_values.push_back(QString::number(value));
    }

    this->ui->arx_b_input->setText(b_values.join(","));
}

void MainWindow::simulation_start(){
    this->ui->simulation_start_button->setEnabled(false);
    this->ui->simulation_stop_button->setEnabled(true);
}

void MainWindow::simulation_stop(){
    this->ui->simulation_start_button->setEnabled(true);
    this->ui->simulation_stop_button->setEnabled(false);
}

void MainWindow::on_simulation_start_button_clicked()
{

    if (this->simulation.durration == 0){
        this->simulation.start();
    } else {
        this->simulation.start();

        auto timer = new QTimer(this);
        timer->setSingleShot(true);
        connect(timer, &QTimer::timeout, [this](){
            this->simulation.stop();
        });

        timer->start(this->simulation.durration * 1000);
    }
}


void MainWindow::on_simulation_stop_button_clicked()
{
    this->simulation.stop();
}

void MainWindow::on_simulation_ticks_per_second_input_valueChanged(int arg1)
{
    if (this->simulation.is_running)
        this->simulation.stop();

    this->simulation.set_ticks_per_second(arg1);
}


void MainWindow::on_simulation_duration_input_valueChanged(double arg1)
{
    if (this->simulation.is_running)
        this->simulation.stop();

    this->simulation.set_duration(arg1);
}



void MainWindow::on_pid_ti_input_valueChanged(double arg1)
{
    this->simulation.pid->set_ti(arg1);
}


void MainWindow::on_pid_td_input_valueChanged(double arg1)
{
    this->simulation.pid->set_td(arg1);
}


void MainWindow::on_pid_kp_input_valueChanged(double arg1)
{
    this->simulation.pid->set_kp(arg1);
}


void MainWindow::on_generator_amplitude_input_valueChanged(double arg1)
{
    this->simulation.generator->set_amplitude(arg1);
}


void MainWindow::on_generator_frequency_input_valueChanged(double arg1)
{
    this->simulation.generator->set_frequency(arg1);
}


void MainWindow::on_generator_generatortype_input_currentIndexChanged(int index)
{
    this->simulation.generator->set_type(static_cast<GeneratorType>(index));
}


void MainWindow::on_arx_noise_input_valueChanged(double arg1)
{
    this->simulation.arx->set_noise(arg1);
}


void MainWindow::on_arx_noisetype_input_currentIndexChanged(int index)
{
    this->simulation.arx->set_noise_type(static_cast<NoiseType>(index));
}


void MainWindow::on_arx_delay_input_valueChanged(int arg1){
    this->simulation.arx->set_delay(arg1);
}


void MainWindow::on_arx_b_input_textChanged(const QString &arg1)
{
    QStringList b_values = arg1.split(",");
    std::vector<float> b;
    for (const QString& value : b_values){
        if (value.isEmpty())
            continue;
        try {
            b.push_back(value.toFloat());
        } catch (const std::exception& e){
            qDebug() << e.what();
        }
    }
    this->simulation.arx->set_b(b);
}


void MainWindow::on_arx_a_input_textChanged(const QString &arg1)
{
    QStringList a_values = arg1.split(",");
    std::vector<float> a;
    for (const QString& value : a_values){
        if (value.isEmpty())
            continue;
        try {
            a.push_back(value.toFloat());
        } catch (const std::exception& e){
            qDebug() << e.what();
        }
    }

    this->simulation.arx->set_a(a);
}


void MainWindow::on_simulation_reset_button_clicked()
{
    emit this->simulation.reset();
}


void MainWindow::on_simulation_interval_input_valueChanged(int arg1)
{
    if (this->simulation.is_running)
        this->simulation.stop();
    this->simulation.set_interval(arg1);
}

