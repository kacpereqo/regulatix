#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QFile>
#include <QList>
#include <QMainWindow>
#include <QString>
#include <QTimer>

#include "quar.h"
#include "qwarzad.h"
#include "testy.h"
#include "ui_mainwindow.h"
#include "qarx_insert_dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum class typSledzenia { sledzacy, wolny, sledzBiezace };

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    double minWartosci(double, double);
    double maxWartosci(double, double);
    double minSter(double, double, double);
    double maxSter(double, double, double);

    double minUchyb(double);
    double maxUchyb(double);

    void sledzenieWartosc();
    void sledzenieUchyb();
    void sledzenieSter();

private slots:
    void tikTimer();

    void wartosciPlot();
    void sterPlot();
    void uchybPlot();

    void clearWart();
    void clearSter();
    void clearRegulator();

    void addKrok(int krok);
    void addZad(double wzad);
    void addReg(double wreg);
    void addUchyb(double wuchyb);
    void addWster(double wster);
    void addWP(double p);
    void addWI(double i);
    void addWD(double d);

    void on_startButton_clicked();

    void on_stopButton_clicked();

    void on_krokButton_clicked();

    void on_resetButton_clicked();

    void on_speedButton_clicked();

    void on_PotwierdButton_clicked();

    void on_PotwierdzARX_clicked();

    void on_pButton_clicked();

    void on_iButton_clicked();

    void on_dButton_clicked();

    void on_aKtoraSpin_valueChanged(int arg1);

    void on_bKtoraSpin_valueChanged(int arg1);

    void on_granicaStanButton_clicked();

    void on_granicaWprowadzButton_clicked();

    void on_gornaSpin_valueChanged(double arg1);

    void on_dolnaSpin_valueChanged(double arg1);

    void on_clear_I_clicked();

    void on_clear_D_clicked();

    void on_Testuj_ARX_clicked();

    void on_Testuj_PID_clicked();

    void on_Testuj_UAR_clicked();

    void on_stanStatyczny_clicked();

    void on_PotwierdzStatyczny_clicked();

    void on_zapiszButton_clicked();

    void on_wczytajButton_clicked();

    void on_zapiszButton_all_clicked();

    void on_wczytajButton_all_clicked();

    void on_sledzWartosciCombo_currentIndexChanged(int index);

    void on_sledzUchybCombo_currentIndexChanged(int index);

    void on_sledzPIDCombo_currentIndexChanged(int index);

    void on_insert_checkStateChanged(const Qt::CheckState &arg1);

    void on_szybkoscSimSpin_valueChanged(double arg1);

    void on_ampSkokSpin_valueChanged(double arg1);

    void on_ampSinusSpin_valueChanged(double arg1);

    void on_ampProstokatSpin_valueChanged(double arg1);

    void on_okresSinusSpin_valueChanged(int arg1);

    void on_okresProstokatSpin_valueChanged(int arg1);

    void on_wypelnienieProstokatSpin_valueChanged(double arg1);

    void on_suStatic_spin_valueChanged(double arg1);

    void on_preStatic_spin_valueChanged(double arg1);

    void on_pSpin_valueChanged(double arg1);

    void on_iSpin_valueChanged(double arg1);

    void on_dSpin_valueChanged(double arg1);

    /*
     * void on_aWartSpin_valueChanged(double arg1);
     *
     * void on_bWartSpin_valueChanged(double arg1);
     *
     * void on_szumSpin_valueChanged(int arg1);
     *
     * void on_opoznienieSpin_valueChanged(int arg1);
     *
        void on_aRozmiarSpin_valueChanged(int arg1);

        void on_bRozmiarSpin_valueChanged(int arg1);
     */

    void on_sposob_sumy_clicked();

private:
    Ui::MainWindow *ui;
    typSledzenia k_sledzWartosc = typSledzenia::sledzacy;
    typSledzenia k_sledzUchyb = typSledzenia::sledzacy;
    typSledzenia k_sledzSter = typSledzenia::sledzacy;
    //zmienne dotyczące timera
    QTimer *timer = nullptr;
    size_t tick_timer = 0; //tick odpowiada za nasz krok chwili
    double speed_timer = 100.0;

    bool k_on_off_limity = false;
    bool k_on_off_static = false;
    bool auto_insert = false;
    bool k_PID_suma_pod_calka = false;

    QUAR *k_UAR = nullptr;
    QwarZadana *k_warZad = nullptr;

    //tymczasowe zmienne na dzialanie backendowiec to polaczy z rzeczywistym dzialaniem
    double t_minWart = 0.0,
           t_maxWart = 0.0; //wartosci tymczasowe albo i nie, sluzyli mi do obslugi testu wykresu
    double t_minSter = 0.0,
           t_maxSter = 0.0; //mozna wykorzystac do przekazywania danych z backendu na frontend
    double t_minUchyb = 0.0, t_maxUchyb = 0.0;
    double t_wzad = 0.0, t_wreg = 0.0, t_uchyb = 0.0, t_P = 0.0, t_I = 0.0, t_D = 0.0,
           t_Ster = 0.0; //

    QList<double> k_krok;
    QList<double> k_wzad, k_wreg, k_uchyb; // tablice pierwszego wykresu wartosci
    QList<double> k_P, k_I, k_D, k_ster;   //tablice drugiego wykresu wartosci


    //testy
    void view_tested_results(QVector<decltype(ui->testARX_0_wyn)> UI, QVector<Test_result> result);
    void view_actual_state();
    void replot_all();
    void reload_spin();
};
#endif // MAINWINDOW_H
