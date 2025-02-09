#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "simulation.h"
#include <QAction>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void simulation_start();
    void simulation_stop();

    // simulation

    void on_simulation_start_button_clicked();
    void on_simulation_stop_button_clicked();
    void on_simulation_ticks_per_second_input_valueChanged(int arg1);
    void on_simulation_duration_input_valueChanged(double arg1);

    // pid

    void on_pid_ti_input_valueChanged(double arg1);
    void on_pid_td_input_valueChanged(double arg1);
    void on_pid_kp_input_valueChanged(double arg1);

    // pid

    void on_generator_amplitude_input_valueChanged(double arg1);
    void on_generator_frequency_input_valueChanged(double arg1);
    void on_generator_generatortype_input_currentIndexChanged(int index);

    // arx

    void on_arx_noise_input_valueChanged(double arg1);
    void on_arx_noisetype_input_currentIndexChanged(int index);
    void on_arx_delay_input_valueChanged(int arg1);
    void on_arx_b_input_textChanged(const QString &arg1);
    void on_arx_a_input_textChanged(const QString &arg1);

    void on_simulation_reset_button_clicked();

    void on_simulation_interval_input_valueChanged(int arg1);

    void on_action_save_as();
    void on_action_open();

private:
    void init();

    Simulation& simulation;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
