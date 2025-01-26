#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "../logic/signal_generators/signal_generator.hpp"
#include "../logic/control_models/feedback_loop.hpp"

#include <QMainWindow>
#include <QtCharts/QLineSeries>
#include "generator.h"


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

private:
    void startStopSimulation();
    void changeGenerator();
    void changeRegulatorParameters();
    void tick();

    Ui::MainWindow *ui;
    QTimer *timer;

    FeedbackLoop *feedback;
    f32 Last = 0.f; //sprzężenie zwrotne

    Parameters *parameters;

    SignalGenerator *generator;
    int tickIndex = 0;
};
#endif // MAINWINDOW_H
