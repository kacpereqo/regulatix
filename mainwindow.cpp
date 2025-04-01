#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , timer(new QTimer(this))
    , k_UAR(new QUAR(new QARX(this), new QPID(this)))
    , k_warZad(new QwarZadana(this))
{
    ui->setupUi(this);
    QPen penZAD, penREG, penUCHYB, penSTER, penP, penI, penD;
    penZAD.setColor(Qt::blue);
    penZAD.setWidth(2);
    penREG.setColor(Qt::red);
    penREG.setWidth(2);
    penUCHYB.setColor(Qt::green);
    penUCHYB.setWidth(1);
    penSTER.setColor(Qt::darkBlue);
    penSTER.setWidth(2);
    penP.setColor(Qt::magenta);
    penP.setWidth(1);
    penI.setColor(Qt::darkYellow);
    penI.setWidth(1);
    penD.setColor(Qt::green);
    penD.setWidth(1);

    ui->tabWidget->setTabText(0, "Sterowanie");
    ui->tabWidget->setTabText(1, "ARX i PID");
    ui->tabWidget->setTabText(2, "TEST ARX");
    ui->tabWidget->setTabText(3, "TEST PID");
    ui->tabWidget->setTabText(4, "TEST UAR");
    //setup z metod - w skrócie nie dotykaj mi tego :)
    on_PotwierdButton_clicked();

    //setup timera
    connect(timer, SIGNAL(timeout()), this, SLOT(tikTimer()));

    //setup git plotow
    ui->wykresWART->addGraph(); //0 zad
    ui->wykresWART->graph(0)->setPen(penZAD);
    ui->wykresWART->graph(0)->setName("Wartosc Zadana");
    ui->wykresWART->addGraph(); //wyjsc czy reg
    ui->wykresWART->graph(1)->setPen(penREG);
    ui->wykresWART->graph(1)->setName("Wartosc Regulowana");
    ui->wykresUchyb->addGraph(); //uchy
    ui->wykresUchyb->graph(0)->setPen(penUCHYB);
    ui->wykresUchyb->graph(0)->setName("Uchyb");
    ui->wykresSTERPID->addGraph(); //ster
    ui->wykresSTERPID->graph(0)->setPen(penSTER);
    ui->wykresSTERPID->graph(0)->setName("Wartosc sterujaca");
    ui->wykresSTERPID->addGraph(); //P
    ui->wykresSTERPID->graph(1)->setName("Proporcjonalna");
    ui->wykresSTERPID->graph(1)->setPen(penP);
    ui->wykresSTERPID->addGraph(); //I
    ui->wykresSTERPID->graph(2)->setPen(penI);
    ui->wykresSTERPID->graph(2)->setName("Calkujaca");
    ui->wykresSTERPID->addGraph(); //D
    ui->wykresSTERPID->graph(3)->setPen(penD);
    ui->wykresSTERPID->graph(3)->setName("Rozniczkujaca");

    ui->wykresSTERPID->legend->setVisible(true);
    ui->wykresUchyb->legend->setVisible(true);
    ui->wykresWART->legend->setVisible(true);

    ui->wykresWART->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->wykresSTERPID->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->wykresUchyb->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->sledzWartosciCombo->setCurrentIndex(1);
    ui->sledzPIDCombo->setCurrentIndex(1);
    ui->sledzUchybCombo->setCurrentIndex(1);

    ui->wykresWART->xAxis->setRange(0, tick_timer * 1.2 + 10);
    ui->wykresWART->yAxis->setRange(-10.0, 10.0);

    ui->wykresUchyb->xAxis->setRange(0, tick_timer * 1.2 + 10);
    ui->wykresUchyb->yAxis->setRange(-10.0, 10.0);

    ui->wykresSTERPID->xAxis->setRange(0, tick_timer * 1.2 + 10);
    ui->wykresSTERPID->yAxis->setRange(-10.0, 10.0);
}

MainWindow::~MainWindow()
{
    delete k_UAR;
    delete ui;
}

double MainWindow::minWartosci(double zad, double reg)
{
    t_minWart = (t_minWart < zad) ? t_minWart : zad;
    t_minWart = (t_minWart < reg) ? t_minWart : reg;
    return t_minWart;
}

double MainWindow::maxWartosci(double zad, double reg)
{
    t_maxWart = (t_maxWart > zad) ? t_maxWart : zad;
    t_maxWart = (t_maxWart > reg) ? t_maxWart : reg;
    return t_maxWart;
}

double MainWindow::minUchyb(double uchyb)
{
    t_minUchyb = (t_minUchyb < uchyb) ? t_minUchyb : uchyb;
    return t_minUchyb;
}
double MainWindow::maxUchyb(double uchyb)
{
    t_maxUchyb = (t_maxUchyb > uchyb) ? t_maxUchyb : uchyb;
    return t_maxUchyb;
}

double MainWindow::minSter(double P, double I, double D)
{
    t_minSter = (t_minSter < P) ? t_minSter : P;
    t_minSter = (t_minSter < I) ? t_minSter : I;
    t_minSter = (t_minSter < D) ? t_minSter : D;
    t_minSter = (t_minSter < (P + I + D)) ? t_minSter : (P + I + D);
    return t_minSter;
}

double MainWindow::maxSter(double P, double I, double D)
{
    t_maxSter = ((t_maxSter > P) ? t_maxSter : P);
    t_maxSter = ((t_maxSter > I) ? t_maxSter : I);
    t_maxSter = ((t_maxSter > D) ? t_maxSter : D);
    t_maxSter = ((t_maxSter > (P + I + D)) ? t_maxSter : (P + I + D));
    return t_maxSter;
}

void MainWindow::tikTimer()
{
    tick_timer++;
    //rozpoczecie dziedziny
    addKrok((tick_timer - 1));
    //rozpoczecie symulacji
    //wyswietlenie zadanej

    t_wzad = k_warZad->simulate_value((tick_timer));
    t_wreg = k_UAR->Simulate(t_wzad);
    t_P = k_UAR->QPID_get_P();
    t_I = k_UAR->QPID_get_I();
    t_D = k_UAR->QPID_get_D();
    t_uchyb = k_UAR->QPID_get_Uch();
    t_Ster = k_UAR->getUi();

    addZad(t_wzad);
    addWster((t_Ster));
    addWP(t_P);
    addWI(t_I);
    addWD(t_D);
    addUchyb(t_uchyb);
    addReg(t_wreg);

    replot_all();
}

void MainWindow::replot_all()
{
    wartosciPlot();
    sterPlot();
    uchybPlot();
    sledzenieWartosc();
    sledzenieUchyb();
    sledzenieSter();
}

void MainWindow::wartosciPlot()
{
    ui->wykresWART->graph(0)->setData(k_krok, k_wzad);
    ui->wykresWART->graph(1)->setData(k_krok, k_wreg);
    ui->wykresWART->replot();
    ui->wykresWART->update();
}

void MainWindow::sterPlot()
{
    ui->wykresSTERPID->graph(0)->setData(k_krok, k_ster);
    ui->wykresSTERPID->graph(1)->setData(k_krok, k_P);
    ui->wykresSTERPID->graph(2)->setData(k_krok, k_I);
    ui->wykresSTERPID->graph(3)->setData(k_krok, k_D);
    ui->wykresSTERPID->replot();
    ui->wykresSTERPID->update();
}

void MainWindow::uchybPlot()
{
    ui->wykresUchyb->graph(0)->setData(k_krok, k_uchyb);
    ui->wykresUchyb->replot();
    ui->wykresSTERPID->update();
}

void MainWindow::clearWart()
{
    k_wzad = {0};
    k_wreg = {0};
    k_uchyb = {0};
    t_wzad = 0.0;
    t_wreg = 0.0;
    t_uchyb = 0.0;
}

void MainWindow::clearRegulator()
{
    k_P = {0};
    k_I = {0};
    k_D = {0};
    t_P = 0.0;
    t_I = 0.0;
    t_D = 0.0;
}
void MainWindow::clearSter()
{
    k_ster = {0};
    t_Ster = 0.0;
}

void MainWindow::addKrok(int krok) //krok zalezy od tick_timera dlatego powinien reczny krok tez zwiekszac tik
{
    k_krok.append(krok);
}

void MainWindow::addZad(double wzad)
{
    k_wzad.append(wzad);
}

void MainWindow::addReg(double wreg)
{
    k_wreg.append(wreg);
}

void MainWindow::addUchyb(double wuchyb)
{
    k_uchyb.append(wuchyb);
}

void MainWindow::addWster(double wster)
{
    k_ster.append(wster);
}

void MainWindow::addWP(double p)
{
    k_P.append(p);
}

void MainWindow::addWI(double i)
{
    k_I.append(i);
}

void MainWindow::addWD(double d)
{
    k_D.append(d);
}

void MainWindow::on_startButton_clicked()
{
    timer->start(speed_timer);
    ui->startButton->setEnabled(false);
    ui->stopButton->setEnabled(true);
    ui->krokButton->setEnabled(false);
    //ui->resetButton->setEnabled(false);
}

void MainWindow::on_stopButton_clicked()
{
    timer->stop();
    ui->stopButton->setEnabled(false);
    ui->startButton->setEnabled(true);
    ui->krokButton->setEnabled(true);
    //ui->resetButton->setEnabled(true);
}

void MainWindow::on_krokButton_clicked()
{
    tikTimer();
}

void MainWindow::on_resetButton_clicked()
{
    //reset tab 1
    speed_timer = 100;
    ui->szybkoscSimSpin->setValue(100);
    tick_timer = 0;
    k_krok = {0};
    clearWart();
    clearSter();
    clearRegulator();
    //sledzenieWartosc();
    wartosciPlot();
    sterPlot();
    uchybPlot();

    //reset tab 2

    on_stopButton_clicked();

    k_warZad->reset();
    k_UAR->reset();

    ui->aRozmiarSpin->setText("1");
    ui->bRozmiarSpin->setText("1");
    ui->opoznienieSpin->setValue(1);
    ui->szumSpin->setValue(1);

    ui->ampSinusSpin->setValue(0);
    ui->ampProstokatSpin->setValue(0);
    ui->ampSkokSpin->setValue(0);
    ui->okresSinusSpin->setValue(0);
    ui->okresProstokatSpin->setValue(0);
    ui->wypelnienieProstokatSpin->setValue(0);
    on_PotwierdButton_clicked();

    ui->pSpin->setValue(0);
    on_pButton_clicked();
    ui->iSpin->setValue(0);
    on_iButton_clicked();
    ui->dSpin->setValue(0);
    on_dButton_clicked();

    k_on_off_limity = false;
    ui->gornaSpin->setValue(0);
    ui->dolnaSpin->setValue(0);
    on_granicaWprowadzButton_clicked();
    ui->granicaStanButton->setText("Włącz");

    view_actual_state();
    on_PotwierdzARX_clicked();
}

void MainWindow::sledzenieWartosc()
{
    double min = minWartosci(t_wzad, t_wreg), max = maxWartosci(k_wzad.last(), k_wreg.last());
    if (k_sledzWartosc == typSledzenia::sledzacy)
    {
        ui->wykresWART->yAxis->setRange(min * 1.2 - 10, max * 1.2 + 10);
        ui->wykresWART->xAxis->setRange(0, tick_timer * 1.2 + 10);

    }
    else if (k_sledzWartosc == typSledzenia::sledzBiezace)
    {

        if (tick_timer > 50)
        {
            min = 9999999, max = 0;
            for(size_t i = tick_timer - 1; i > tick_timer - 50 && i > 0; i--)
            {
                qInfo() << i;
                if(min > k_wzad[i]) min = k_wzad[i];
                if(min > k_wreg[i]) min = k_wreg[i];
                if(max < k_wzad[i]) max = k_wzad[i];
                if(max < k_wreg[i]) max = k_wreg[i];
            }
            ui->wykresWART->xAxis->setRange(tick_timer - 50, tick_timer + 20);
        }
        else
        {
            ui->wykresWART->xAxis->setRange(0, 70);
        }
        ui->wykresWART->yAxis->setRange(min - 2, max + 2);
    }
}

void MainWindow::sledzenieSter()
{
    double min = minSter(t_P, t_I, t_D), max = maxSter(t_P, t_I, t_D);
    if (k_sledzSter == typSledzenia::sledzacy) {
        ui->wykresSTERPID->yAxis->setRange(min * 1.2 - 10, max * 1.2 + 10);
        ui->wykresSTERPID->xAxis->setRange(0, tick_timer * 1.2 + 10);
    }
    else if (k_sledzSter == typSledzenia::sledzBiezace)
    {
        if (tick_timer > 50)
        {
            ui->wykresSTERPID->xAxis->setRange(tick_timer - 50, tick_timer + 20);
            min = 9999999, max = 0;
            for(size_t i = tick_timer - 1; i > tick_timer - 50; i--)
            {
                if(min > k_P[i]) min = k_P[i];
                if(min > k_I[i]) min = k_I[i];
                if(min > k_D[i]) min = k_D[i];
                if(min > k_ster[i]) min = k_ster[i];
                if(max < k_P[i]) max = k_P[i];
                if(max < k_I[i]) max = k_I[i];
                if(max < k_D[i]) max = k_D[i];
                if(max < k_ster[i]) max = k_ster[i];
            }
        }
        else
        {
            ui->wykresSTERPID->xAxis->setRange(0, 70);
        }
        ui->wykresSTERPID->yAxis->setRange(min - 2, max + 2);
    }
}
void MainWindow::sledzenieUchyb()
{
    double min = minUchyb(t_uchyb), max = maxUchyb(t_uchyb);
    if (k_sledzUchyb == typSledzenia::sledzacy) {
        ui->wykresUchyb->yAxis->setRange(min * 1.2 - 10, max * 1.2 + 10);
        ui->wykresUchyb->xAxis->setRange(0, tick_timer * 1.2 + 10);
    }
    else if (k_sledzUchyb == typSledzenia::sledzBiezace)
    {
        if (tick_timer > 50)
        {
            ui->wykresUchyb->xAxis->setRange(tick_timer - 50, tick_timer + 20);
            min = 99, max = 0;
            for(size_t i = tick_timer - 1; i > tick_timer - 50; i--)
            {
                if(min > k_uchyb[i]) min = k_uchyb[i];
                if(max < k_uchyb[i]) max = k_uchyb[i];
            }
        }
        else
        {
            ui->wykresUchyb->xAxis->setRange(0, 70);
        }
        ui->wykresUchyb->yAxis->setRange(min - 2, max + 2);
    }
}

void MainWindow::on_speedButton_clicked()
{
    speed_timer = ui->szybkoscSimSpin->value();
    timer->setInterval(speed_timer);
}

void MainWindow::on_PotwierdButton_clicked()
{
    k_warZad->set_J(ui->ampSkokSpin->value());
    k_warZad->set_S(ui->ampSinusSpin->value(), ui->okresSinusSpin->value() * 3);
    k_warZad->set_P(ui->ampProstokatSpin->value(),
                    ui->okresProstokatSpin->value() * 3,
                    ui->wypelnienieProstokatSpin->value());
    view_actual_state();
}

void MainWindow::on_PotwierdzARX_clicked()
{
    auto QARX_dialog = new QARX_insert_Dialog(k_UAR->QARX_serialize_all(false),nullptr);
    if(QARX_dialog->exec())
    {
        QByteArray new_QARX = QARX_dialog->get_QARX();
        if(!(this->k_UAR->QARX_serialize_all(false) == new_QARX))
        {
            this->k_UAR->QARX_deserialize_all(new_QARX,false);
        }
        auto sizeB = k_UAR->QARX_get_sizeB(), sizeA = k_UAR->QARX_get_sizeA();
        ui->bRozmiarSpin->setText(QString::number(sizeB));
        ui->bKtoraSpin->setMaximum(sizeB);
        ui->aRozmiarSpin->setText(QString::number(sizeA));
        ui->aKtoraSpin->setMaximum(sizeB);
    }
    view_actual_state();
    reload_spin();
    delete QARX_dialog;
}

void MainWindow::on_pButton_clicked()
{
    double val = ui->pSpin->value();
    k_UAR->QPID_setP(val);
    view_actual_state();
}

void MainWindow::on_iButton_clicked()
{
    double val = ui->iSpin->value();
    k_UAR->QPID_setI(val);
    view_actual_state();
}

void MainWindow::on_dButton_clicked()
{
    double val = ui->dSpin->value();
    k_UAR->QPID_setD(val);
    view_actual_state();
}

void MainWindow::on_aKtoraSpin_valueChanged(int arg1)
{
    ui->aAktLine->setText(
        QString::number((arg1 - 1 < k_UAR->QARX_get_sizeA()) ? k_UAR->QARX_get_A(arg1) : 0));
}

void MainWindow::on_bKtoraSpin_valueChanged(int arg1)
{
    ui->bAktLine->setText(
        QString::number((arg1 - 1 < k_UAR->QARX_get_sizeB()) ? k_UAR->QARX_get_B(arg1) : 0));
}

void MainWindow::on_granicaStanButton_clicked()
{
    k_on_off_limity = !k_on_off_limity;
    view_actual_state();
    on_granicaWprowadzButton_clicked();
}

void MainWindow::on_granicaWprowadzButton_clicked()
{
    k_UAR->QPID_setLimit(k_on_off_limity, ui->dolnaSpin->value(), ui->gornaSpin->value());
    view_actual_state();
}

void MainWindow::on_gornaSpin_valueChanged(double arg1)
{
    ui->dolnaSpin->setMaximum(arg1);
    if (auto_insert)
        on_granicaWprowadzButton_clicked();
}

void MainWindow::on_dolnaSpin_valueChanged(double arg1)
{
    ui->gornaSpin->setMinimum(arg1);
    if (auto_insert)
        on_granicaWprowadzButton_clicked();
}

void MainWindow::on_clear_I_clicked()
{
    k_UAR->QPID_resetI();
}

void MainWindow::on_clear_D_clicked()
{
    k_UAR->QPID_resetD();
}

void MainWindow::view_tested_results(QVector<decltype(ui->testARX_0_wyn)> UI,
                                     QVector<Test_result> result)
{
    for (size_t i = 0; i < result.size(); i++) {
        switch (result[i]) {
        default:
        case Test_result::INTERUPTED: {
            UI[i]->setText("INTERUPTED!!");
            break;
        }
        case Test_result::OK: {
            UI[i]->setText("OK!!");
            break;
        }
        case Test_result::FAIL: {
            UI[i]->setText("FAIL!!");
            break;
        }
        }
    }
}

void MainWindow::on_Testuj_ARX_clicked()
{
    auto results = TestyARX::all_tests();
    QVector<decltype(ui->testARX_0_wyn)> tabs = {ui->testARX_0_wyn,
                                                 ui->testARX_skok1_wyn,
                                                 ui->testARX_skok2_wyn,
                                                 ui->testARX_skok3_wyn};
    view_tested_results(tabs, results);
}

void MainWindow::on_Testuj_PID_clicked()
{
    auto results = TestyPID::all_tests();
    QVector<decltype(ui->testARX_0_wyn)> tabs = {ui->testP_0_wyn,
                                                 ui->testP_skok_wyn,
                                                 ui->testPI_skok1_wyn,
                                                 ui->testPI_skok2_wyn,
                                                 ui->testPID_skok_wyn};
    view_tested_results(tabs, results);
}

void MainWindow::on_Testuj_UAR_clicked()
{
    auto results = TestyUAR::all_tests();
    QVector<decltype(ui->testARX_0_wyn)> tabs = {ui->testUAR_0_wyn,
                                                 ui->testUAR_skok1_wyn,
                                                 ui->testUAR_skok2_wyn,
                                                 ui->testUAR_skok3_wyn};
    view_tested_results(tabs, results);
}

void MainWindow::on_stanStatyczny_clicked()
{
    k_on_off_static = !k_on_off_static;
    k_UAR->QPID_set_anty_windup(k_on_off_static);
    view_actual_state();
    on_PotwierdzStatyczny_clicked();
}

void MainWindow::on_PotwierdzStatyczny_clicked()
{
    k_UAR->set_static(k_on_off_static, ui->preStatic_spin->value(), ui->suStatic_spin->value());
    view_actual_state();
}

void MainWindow::view_actual_state()
{
    ui->AjLine->setText(QString::number(k_warZad->get_Aj()));
    ui->AsLine->setText(QString::number(k_warZad->get_As()));
    ui->ApLine->setText(QString::number(k_warZad->get_Ap()));
    ui->TsLine->setText(QString::number(k_warZad->get_Ts()));
    ui->TpLine->setText(QString::number(k_warZad->get_Tp()));
    ui->PpLine->setText(QString::number(k_warZad->get_Pp()));

    on_aKtoraSpin_valueChanged(ui->aKtoraSpin->value());
    on_bKtoraSpin_valueChanged(ui->bKtoraSpin->value());

    ui->pWysw->setText(QString::number(k_UAR->QPID_get_kp()));
    ui->iWysw->setText(QString::number(k_UAR->QPID_get_ki()));
    ui->dWysw->setText(QString::number(k_UAR->QPID_get_kd()));

    ui->granicaStanButton->setText((k_on_off_limity) ? "Wyłącz" : "Włącz");

    ui->dolnaLine->setText((k_on_off_limity) ? QString::number(k_UAR->QPID_get_min_lim()) : "--");
    ui->gornaLine->setText((k_on_off_limity) ? QString::number(k_UAR->QPID_get_max_lim()) : "--");

    ui->stanStatyczny->setText((k_on_off_static) ? "Wyłącz" : "Włącz");

    ui->preStatic_value->setText((k_on_off_static) ? QString::number(k_UAR->get_preStatic()) : "--");
    ui->suStatic_value->setText((k_on_off_static) ? QString::number(k_UAR->get_suStatic()) : "--");
}

void MainWindow::on_zapiszButton_clicked()
{
    QString FileName = QFileDialog::getSaveFileName(this, "Wskaż plik do zapisu", "", "");
    QFile k_file;
    k_file.setFileName(FileName);
    if (!FileName.isEmpty()) {
        if (k_file.open(QIODevice::WriteOnly)) {
            QDataStream outStream(&k_file);
            outStream << k_warZad->serialize() << k_UAR->QPID_serialize()
                      << k_UAR->QARX_serialize_all(false);
            k_file.close();
        }
    }
}

void MainWindow::on_wczytajButton_clicked()
{
    QString FileName = QFileDialog::getOpenFileName(this, "Wskaż plik do otworzenia", "", "");
    QFile k_file;
    if (!FileName.isEmpty()) {
        k_file.setFileName(FileName);
        if (k_file.open(QIODevice::ReadOnly)) {
            QDataStream inStream(&k_file);
            QByteArray war, PID, ARX;
            inStream >> war >> PID >> ARX;
            k_warZad->deserialize(war);
            k_UAR->QPID_deserialize(PID);
            k_UAR->QPID_resetD();
            k_UAR->QPID_resetI();
            k_UAR->QARX_deserialize_all(ARX, false);

            k_file.close();
            ui->aRozmiarSpin->setText(QString::number(k_UAR->QARX_get_sizeA()));
            ui->bRozmiarSpin->setText(QString::number(k_UAR->QARX_get_sizeB()));
            on_aKtoraSpin_valueChanged(1);
            on_bKtoraSpin_valueChanged(1);
            view_actual_state();
            reload_spin();
        }
    }
}

void MainWindow::on_zapiszButton_all_clicked()
{
    QString FileName = QFileDialog::getSaveFileName(this, "Wskaż plik do zapisu", "", "");
    QFile k_file;
    k_file.setFileName(FileName);
    if (!FileName.isEmpty()) {
        if (k_file.open(QIODevice::WriteOnly)) {
            QDataStream outStream(&k_file);
            outStream << tick_timer << speed_timer << k_UAR->serialize() << k_warZad->serialize()
                      << k_on_off_limity << k_on_off_static << auto_insert;
            outStream << t_minWart << t_maxWart << t_minSter << t_maxSter << t_minUchyb
                      << t_maxUchyb;
            outStream << t_wzad << t_wreg << t_uchyb << t_P << t_I << t_D << t_Ster;

            QVector<QList<double> *> vectors
                = {&k_krok, &k_wzad, &k_wreg, &k_uchyb, &k_P, &k_I, &k_D, &k_ster};
            for (const auto &vec : vectors) {
                outStream << (size_t) (vec->size());
                for (const auto &value : *vec) {
                    outStream << value;
                }
            }
            k_file.close();
        }
    }
}

void MainWindow::on_wczytajButton_all_clicked()
{
    QString FileName = QFileDialog::getOpenFileName(this, "Wskaż plik do otworzenia", "", "");
    QFile k_file;
    if (!FileName.isEmpty()) {
        k_file.setFileName(FileName);
        if (k_file.open(QIODevice::ReadOnly)) {
            QDataStream inStream(&k_file);
            QByteArray UAR, war;
            inStream >> tick_timer >> speed_timer >> UAR >> war >> k_on_off_limity
                >> k_on_off_static >> auto_insert;
            k_warZad->deserialize(war);
            k_UAR->deserialize(UAR);
            inStream >> t_minWart >> t_maxWart >> t_minSter >> t_maxSter >> t_minUchyb
                >> t_maxUchyb;
            inStream >> t_wzad >> t_wreg >> t_uchyb >> t_P >> t_I >> t_D >> t_Ster;

            QVector<QList<double> *> vectors
                = {&k_krok, &k_wzad, &k_wreg, &k_uchyb, &k_P, &k_I, &k_D, &k_ster};
            for (auto &vec : vectors) {
                size_t size;
                inStream >> size;
                vec->resize(size, 0);
                for (auto &val : *vec) {
                    inStream >> val;
                }
            }

            k_file.close();
            ui->aRozmiarSpin->setText(QString::number(k_UAR->QARX_get_sizeA()));
            ui->bRozmiarSpin->setText(QString::number(k_UAR->QARX_get_sizeB()));
            on_aKtoraSpin_valueChanged(1);
            on_bKtoraSpin_valueChanged(1);
            view_actual_state();
            replot_all();

            ui->wykresWART->replot();
            ui->wykresSTERPID->replot();
            ui->wykresUchyb->replot();
            ui->wykresWART->update();
            ui->wykresSTERPID->update();
            ui->wykresUchyb->update();

            reload_spin();
        }
    }
}

void MainWindow::on_sledzWartosciCombo_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        k_sledzWartosc = typSledzenia::sledzacy;
        break;
    case 1:
        k_sledzWartosc = typSledzenia::sledzBiezace;
        break;
    case 2:
        k_sledzWartosc = typSledzenia::wolny;
        break;
    }
}

void MainWindow::on_sledzUchybCombo_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        k_sledzUchyb = typSledzenia::sledzacy;
        break;
    case 1:
        k_sledzUchyb = typSledzenia::sledzBiezace;
        break;
    case 2:
        k_sledzUchyb = typSledzenia::wolny;
        break;
    }
}

void MainWindow::on_sledzPIDCombo_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        k_sledzSter = typSledzenia::sledzacy;
        break;
    case 1:
        k_sledzSter = typSledzenia::sledzBiezace;
        break;
    case 2:
        k_sledzSter = typSledzenia::wolny;
        break;
    }
}

void MainWindow::on_insert_checkStateChanged(const Qt::CheckState &arg1)
{
    auto_insert = arg1;
    QList<decltype(ui->PotwierdButton)> buttons = {ui->PotwierdButton,
                                                   ui->PotwierdzStatyczny,
                                                   ui->pButton,
                                                   ui->iButton,
                                                   ui->dButton,
                                                   ui->granicaWprowadzButton,
                                                   ui->speedButton};
    for (auto &but : buttons)
        but->setVisible(!auto_insert);
}

/*
 *
 * Po dodaniu wprowadzania ARX przez okienko stało się zbędne
 *
void MainWindow::on_bWartSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdzARX_clicked();
}

void MainWindow::on_aWartSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdzARX_clicked();
}

void MainWindow::on_szumSpin_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdzARX_clicked();
}

void MainWindow::on_opoznienieSpin_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdzARX_clicked();
}

void MainWindow::on_aRozmiarSpin_valueChanged(int arg1)
{
    if (arg1 < ui->aKtoraSpin->value())
        ui->aKtoraSpin->setValue(arg1);
    ui->aKtoraSpin->setMaximum(arg1);
}

void MainWindow::on_bRozmiarSpin_valueChanged(int arg1)
{
    if (arg1 < ui->bKtoraSpin->value())
        ui->bKtoraSpin->setValue(arg1);
    ui->bKtoraSpin->setMaximum(arg1);
}
*/
void MainWindow::on_szybkoscSimSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_speedButton_clicked();
}

void MainWindow::on_ampSkokSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdButton_clicked();
}

void MainWindow::on_ampSinusSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdButton_clicked();
}

void MainWindow::on_ampProstokatSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdButton_clicked();
}

void MainWindow::on_okresSinusSpin_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdButton_clicked();
}

void MainWindow::on_okresProstokatSpin_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdButton_clicked();
}

void MainWindow::on_wypelnienieProstokatSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdButton_clicked();
}


void MainWindow::on_suStatic_spin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdzStatyczny_clicked();
}

void MainWindow::on_preStatic_spin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_PotwierdzStatyczny_clicked();
}

void MainWindow::on_pSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_pButton_clicked();
}

void MainWindow::on_iSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_iButton_clicked();
}

void MainWindow::on_dSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    if (auto_insert)
        on_dButton_clicked();
}

void MainWindow::reload_spin()
{
    bool temp = auto_insert;
    auto_insert = false;
    ui->ampSkokSpin->setValue(ui->AjLine->text().toDouble());
    ui->ampSinusSpin->setValue(ui->AsLine->text().toDouble());
    ui->okresSinusSpin->setValue(ui->TsLine->text().toDouble());
    ui->ampProstokatSpin->setValue(ui->ApLine->text().toDouble());
    ui->okresProstokatSpin->setValue(ui->TpLine->text().toDouble());
    ui->wypelnienieProstokatSpin->setValue(ui->PpLine->text().toDouble());

    ui->opoznienieSpin->setValue(k_UAR->QARX_get_delay());
    ui->szumSpin->setValue(k_UAR->QARX_get_noise() * 100);

    ui->pSpin->setValue(ui->pWysw->text().toDouble());
    ui->iSpin->setValue(ui->iWysw->text().toDouble());
    ui->dSpin->setValue(ui->dWysw->text().toDouble());

    ui->szybkoscSimSpin->setValue(speed_timer);

    auto_insert = temp;
}


void MainWindow::on_sposob_sumy_clicked()
{
    k_PID_suma_pod_calka = !k_PID_suma_pod_calka;
    ui->sposob_sumy->setText("Suma: " + QString((k_PID_suma_pod_calka)?"Pod":"Przed"));
    k_UAR->QPID_set_sposob_licz_calki(k_PID_suma_pod_calka);
}

