/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *wykresyVertical;
    QHBoxLayout *wykresWartosciLayout;
    QCustomPlot *wykresWART;
    QHBoxLayout *wykresyDolneLayout;
    QCustomPlot *wykresUchyb;
    QCustomPlot *wykresSTERPID;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QGridLayout *sterowanieLayout;
    QPushButton *krokButton;
    QPushButton *stopButton;
    QPushButton *startButton;
    QDoubleSpinBox *szybkoscSimSpin;
    QPushButton *speedButton;
    QPushButton *resetButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_11;
    QComboBox *sledzWartosciCombo;
    QComboBox *sledzUchybCombo;
    QComboBox *sledzPIDCombo;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QDoubleSpinBox *ampSkokSpin;
    QSpinBox *okresProstokatSpin;
    QPushButton *skokButton;
    QPushButton *sinusoidaButton;
    QDoubleSpinBox *ampSinusSpin;
    QLineEdit *PpLine;
    QLineEdit *ApLine;
    QLineEdit *amplitudaLine;
    QSpinBox *okresSinusSpin;
    QLineEdit *AsLine;
    QDoubleSpinBox *ampProstokatSpin;
    QLineEdit *AjLine;
    QPushButton *prostokatButton;
    QLineEdit *okresLine;
    QDoubleSpinBox *wypelnienieProstokatSpin;
    QLineEdit *TpLine;
    QLineEdit *TsLine;
    QLineEdit *wypelnienieLine;
    QFrame *frame;
    QVBoxLayout *plikiLayout;
    QHBoxLayout *konfigLayout;
    QLabel *label_13;
    QPushButton *zapiszButton;
    QPushButton *wczytajButton;
    QHBoxLayout *allLayout;
    QLabel *label_14;
    QPushButton *zapiszButton_all;
    QPushButton *wczytajButton_all;
    QPushButton *PotwierdButton;
    QCheckBox *insert;
    QWidget *tab_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *szumLine;
    QSpinBox *szumSpin;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *opoznienieLine;
    QSpinBox *opoznienieSpin;
    QFrame *frame1;
    QVBoxLayout *obiektStatycznyLayout;
    QLineEdit *StaticInfoLine;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *preStatic_value;
    QDoubleSpinBox *preStatic_spin;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *suStatic_value;
    QDoubleSpinBox *suStatic_spin;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *PotwierdzStatyczny;
    QPushButton *stanStatyczny;
    QPushButton *PotwierdzARX;
    QFrame *frame2;
    QHBoxLayout *regulatorLayout;
    QVBoxLayout *verticalLayout;
    QLabel *pLabel;
    QLabel *dLabel;
    QLabel *iLabel;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *pSpin;
    QDoubleSpinBox *iSpin;
    QDoubleSpinBox *dSpin;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *pWysw;
    QLineEdit *iWysw;
    QLineEdit *dWysw;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pButton;
    QPushButton *iButton;
    QPushButton *dButton;
    QFrame *frame3;
    QVBoxLayout *graniceLayout;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QLineEdit *gornaLine;
    QDoubleSpinBox *gornaSpin;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QLineEdit *dolnaLine;
    QDoubleSpinBox *dolnaSpin;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *granicaWprowadzButton;
    QPushButton *granicaStanButton;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *sposob_sumy;
    QPushButton *clear_I;
    QPushButton *clear_D;
    QFrame *horizontalFrame_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *aRozmiarSpin;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *bAktLine;
    QLabel *label_4;
    QSpinBox *bKtoraSpin;
    QFrame *horizontalFrame_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *aAktLine;
    QLabel *label_5;
    QSpinBox *aKtoraSpin;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *bRozmiarSpin;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *TestARXLine;
    QPushButton *Testuj_ARX;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_22;
    QLineEdit *testARX_0;
    QLineEdit *testARX_0_wyn;
    QVBoxLayout *verticalLayout_21;
    QLineEdit *testARX_skok1;
    QLineEdit *testARX_skok1_wyn;
    QVBoxLayout *verticalLayout_20;
    QLineEdit *testARX_skok2;
    QLineEdit *testARX_skok2_wyn;
    QVBoxLayout *verticalLayout_19;
    QLineEdit *testARX_skok3;
    QLineEdit *testARX_skok3_wyn;
    QWidget *tab_8;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *TestPIDLine;
    QPushButton *Testuj_PID;
    QWidget *verticalLayoutWidget_21;
    QVBoxLayout *verticalLayout_27;
    QVBoxLayout *verticalLayout_28;
    QLineEdit *testP_0;
    QLineEdit *testP_0_wyn;
    QVBoxLayout *verticalLayout_29;
    QLineEdit *testP_skok;
    QLineEdit *testP_skok_wyn;
    QVBoxLayout *verticalLayout_16;
    QLineEdit *testPI_skok1;
    QLineEdit *testPI_skok1_wyn;
    QVBoxLayout *verticalLayout_30;
    QLineEdit *testPI_skok2;
    QLineEdit *testPI_skok2_wyn;
    QVBoxLayout *verticalLayout_31;
    QLineEdit *testPID_skok;
    QLineEdit *testPID_skok_wyn;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *TestUARLine;
    QPushButton *Testuj_UAR;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_23;
    QLineEdit *testUAR_0;
    QLineEdit *testUAR_0_wyn;
    QVBoxLayout *verticalLayout_24;
    QLineEdit *testUAR_skok1;
    QLineEdit *testUAR_skok1_wyn;
    QVBoxLayout *verticalLayout_25;
    QLineEdit *testUAR_skok2;
    QLineEdit *testUAR_skok2_wyn;
    QVBoxLayout *verticalLayout_26;
    QLineEdit *testUAR_skok3;
    QLineEdit *testUAR_skok3_wyn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1194, 697);
        QFont font;
        font.setBold(false);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_7 = new QHBoxLayout(centralwidget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        wykresyVertical = new QVBoxLayout();
        wykresyVertical->setObjectName("wykresyVertical");
        wykresWartosciLayout = new QHBoxLayout();
        wykresWartosciLayout->setObjectName("wykresWartosciLayout");
        wykresWART = new QCustomPlot(centralwidget);
        wykresWART->setObjectName("wykresWART");

        wykresWartosciLayout->addWidget(wykresWART);


        wykresyVertical->addLayout(wykresWartosciLayout);

        wykresyDolneLayout = new QHBoxLayout();
        wykresyDolneLayout->setObjectName("wykresyDolneLayout");
        wykresUchyb = new QCustomPlot(centralwidget);
        wykresUchyb->setObjectName("wykresUchyb");

        wykresyDolneLayout->addWidget(wykresUchyb);

        wykresSTERPID = new QCustomPlot(centralwidget);
        wykresSTERPID->setObjectName("wykresSTERPID");

        wykresyDolneLayout->addWidget(wykresSTERPID);


        wykresyVertical->addLayout(wykresyDolneLayout);


        horizontalLayout_7->addLayout(wykresyVertical);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(20);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(100, 100));
        tabWidget->setMaximumSize(QSize(320, 16777215));
        tab = new QWidget();
        tab->setObjectName("tab");
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 10, 168, 87));
        sterowanieLayout = new QGridLayout(layoutWidget);
        sterowanieLayout->setObjectName("sterowanieLayout");
        sterowanieLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        sterowanieLayout->setContentsMargins(0, 0, 0, 0);
        krokButton = new QPushButton(layoutWidget);
        krokButton->setObjectName("krokButton");
        krokButton->setEnabled(true);

        sterowanieLayout->addWidget(krokButton, 1, 0, 1, 1);

        stopButton = new QPushButton(layoutWidget);
        stopButton->setObjectName("stopButton");
        stopButton->setEnabled(false);

        sterowanieLayout->addWidget(stopButton, 0, 1, 1, 1);

        startButton = new QPushButton(layoutWidget);
        startButton->setObjectName("startButton");
        startButton->setEnabled(true);

        sterowanieLayout->addWidget(startButton, 0, 0, 1, 1);

        szybkoscSimSpin = new QDoubleSpinBox(layoutWidget);
        szybkoscSimSpin->setObjectName("szybkoscSimSpin");
        szybkoscSimSpin->setMinimum(1.000000000000000);
        szybkoscSimSpin->setMaximum(1000.000000000000000);
        szybkoscSimSpin->setValue(100.000000000000000);

        sterowanieLayout->addWidget(szybkoscSimSpin, 2, 0, 1, 1);

        speedButton = new QPushButton(layoutWidget);
        speedButton->setObjectName("speedButton");

        sterowanieLayout->addWidget(speedButton, 2, 1, 1, 1);

        resetButton = new QPushButton(layoutWidget);
        resetButton->setObjectName("resetButton");
        resetButton->setEnabled(true);

        sterowanieLayout->addWidget(resetButton, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 100, 168, 86));
        verticalLayout_11 = new QVBoxLayout(layoutWidget1);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        sledzWartosciCombo = new QComboBox(layoutWidget1);
        sledzWartosciCombo->addItem(QString());
        sledzWartosciCombo->addItem(QString());
        sledzWartosciCombo->addItem(QString());
        sledzWartosciCombo->addItem(QString());
        sledzWartosciCombo->setObjectName("sledzWartosciCombo");

        verticalLayout_11->addWidget(sledzWartosciCombo);

        sledzUchybCombo = new QComboBox(layoutWidget1);
        sledzUchybCombo->addItem(QString());
        sledzUchybCombo->addItem(QString());
        sledzUchybCombo->addItem(QString());
        sledzUchybCombo->setObjectName("sledzUchybCombo");

        verticalLayout_11->addWidget(sledzUchybCombo);

        sledzPIDCombo = new QComboBox(layoutWidget1);
        sledzPIDCombo->addItem(QString());
        sledzPIDCombo->addItem(QString());
        sledzPIDCombo->addItem(QString());
        sledzPIDCombo->setObjectName("sledzPIDCombo");

        verticalLayout_11->addWidget(sledzPIDCombo);

        gridFrame = new QFrame(tab);
        gridFrame->setObjectName("gridFrame");
        gridFrame->setGeometry(QRect(0, 190, 304, 241));
        gridFrame->setFrameShape(QFrame::Shape::Box);
        gridFrame->setLineWidth(1);
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setObjectName("gridLayout");
        ampSkokSpin = new QDoubleSpinBox(gridFrame);
        ampSkokSpin->setObjectName("ampSkokSpin");
        ampSkokSpin->setMinimum(-99.000000000000000);

        gridLayout->addWidget(ampSkokSpin, 2, 1, 1, 1);

        okresProstokatSpin = new QSpinBox(gridFrame);
        okresProstokatSpin->setObjectName("okresProstokatSpin");
        okresProstokatSpin->setMinimum(0);

        gridLayout->addWidget(okresProstokatSpin, 4, 3, 1, 1);

        skokButton = new QPushButton(gridFrame);
        skokButton->setObjectName("skokButton");

        gridLayout->addWidget(skokButton, 0, 1, 1, 1);

        sinusoidaButton = new QPushButton(gridFrame);
        sinusoidaButton->setObjectName("sinusoidaButton");

        gridLayout->addWidget(sinusoidaButton, 0, 2, 1, 1);

        ampSinusSpin = new QDoubleSpinBox(gridFrame);
        ampSinusSpin->setObjectName("ampSinusSpin");
        ampSinusSpin->setMinimum(-99.000000000000000);

        gridLayout->addWidget(ampSinusSpin, 2, 2, 1, 1);

        PpLine = new QLineEdit(gridFrame);
        PpLine->setObjectName("PpLine");
        PpLine->setReadOnly(true);

        gridLayout->addWidget(PpLine, 6, 3, 1, 1);

        ApLine = new QLineEdit(gridFrame);
        ApLine->setObjectName("ApLine");
        ApLine->setReadOnly(true);

        gridLayout->addWidget(ApLine, 1, 3, 1, 1);

        amplitudaLine = new QLineEdit(gridFrame);
        amplitudaLine->setObjectName("amplitudaLine");
        amplitudaLine->setReadOnly(true);

        gridLayout->addWidget(amplitudaLine, 1, 0, 1, 1);

        okresSinusSpin = new QSpinBox(gridFrame);
        okresSinusSpin->setObjectName("okresSinusSpin");
        okresSinusSpin->setMinimum(0);

        gridLayout->addWidget(okresSinusSpin, 4, 2, 1, 1);

        AsLine = new QLineEdit(gridFrame);
        AsLine->setObjectName("AsLine");
        AsLine->setReadOnly(true);

        gridLayout->addWidget(AsLine, 1, 2, 1, 1);

        ampProstokatSpin = new QDoubleSpinBox(gridFrame);
        ampProstokatSpin->setObjectName("ampProstokatSpin");
        ampProstokatSpin->setMinimum(-99.000000000000000);

        gridLayout->addWidget(ampProstokatSpin, 2, 3, 1, 1);

        AjLine = new QLineEdit(gridFrame);
        AjLine->setObjectName("AjLine");
        AjLine->setReadOnly(true);

        gridLayout->addWidget(AjLine, 1, 1, 1, 1);

        prostokatButton = new QPushButton(gridFrame);
        prostokatButton->setObjectName("prostokatButton");

        gridLayout->addWidget(prostokatButton, 0, 3, 1, 1);

        okresLine = new QLineEdit(gridFrame);
        okresLine->setObjectName("okresLine");
        okresLine->setReadOnly(true);

        gridLayout->addWidget(okresLine, 3, 0, 1, 1);

        wypelnienieProstokatSpin = new QDoubleSpinBox(gridFrame);
        wypelnienieProstokatSpin->setObjectName("wypelnienieProstokatSpin");
        wypelnienieProstokatSpin->setMaximum(1.000000000000000);
        wypelnienieProstokatSpin->setSingleStep(0.010000000000000);

        gridLayout->addWidget(wypelnienieProstokatSpin, 7, 3, 1, 1);

        TpLine = new QLineEdit(gridFrame);
        TpLine->setObjectName("TpLine");
        TpLine->setReadOnly(true);

        gridLayout->addWidget(TpLine, 3, 3, 1, 1);

        TsLine = new QLineEdit(gridFrame);
        TsLine->setObjectName("TsLine");
        TsLine->setReadOnly(true);

        gridLayout->addWidget(TsLine, 3, 2, 1, 1);

        wypelnienieLine = new QLineEdit(gridFrame);
        wypelnienieLine->setObjectName("wypelnienieLine");
        wypelnienieLine->setReadOnly(true);

        gridLayout->addWidget(wypelnienieLine, 6, 0, 1, 2);

        frame = new QFrame(tab);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 440, 210, 81));
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setLineWidth(1);
        plikiLayout = new QVBoxLayout(frame);
        plikiLayout->setObjectName("plikiLayout");
        konfigLayout = new QHBoxLayout();
        konfigLayout->setObjectName("konfigLayout");
        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");

        konfigLayout->addWidget(label_13);

        zapiszButton = new QPushButton(frame);
        zapiszButton->setObjectName("zapiszButton");

        konfigLayout->addWidget(zapiszButton);

        wczytajButton = new QPushButton(frame);
        wczytajButton->setObjectName("wczytajButton");

        konfigLayout->addWidget(wczytajButton);


        plikiLayout->addLayout(konfigLayout);

        allLayout = new QHBoxLayout();
        allLayout->setObjectName("allLayout");
        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");

        allLayout->addWidget(label_14);

        zapiszButton_all = new QPushButton(frame);
        zapiszButton_all->setObjectName("zapiszButton_all");

        allLayout->addWidget(zapiszButton_all);

        wczytajButton_all = new QPushButton(frame);
        wczytajButton_all->setObjectName("wczytajButton_all");

        allLayout->addWidget(wczytajButton_all);


        plikiLayout->addLayout(allLayout);

        PotwierdButton = new QPushButton(tab);
        PotwierdButton->setObjectName("PotwierdButton");
        PotwierdButton->setGeometry(QRect(220, 440, 91, 31));
        QFont font1;
        font1.setBold(true);
        PotwierdButton->setFont(font1);
        PotwierdButton->setStyleSheet(QString::fromUtf8("background:lightblue;\n"
"color:black;"));
        insert = new QCheckBox(tab);
        insert->setObjectName("insert");
        insert->setGeometry(QRect(10, 550, 161, 31));
        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        layoutWidget2 = new QWidget(tab_5);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(150, 190, 141, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        szumLine = new QLineEdit(layoutWidget2);
        szumLine->setObjectName("szumLine");

        horizontalLayout_3->addWidget(szumLine);

        szumSpin = new QSpinBox(layoutWidget2);
        szumSpin->setObjectName("szumSpin");
        szumSpin->setReadOnly(true);
        szumSpin->setValue(1);

        horizontalLayout_3->addWidget(szumSpin);

        layoutWidget3 = new QWidget(tab_5);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(0, 190, 141, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        opoznienieLine = new QLineEdit(layoutWidget3);
        opoznienieLine->setObjectName("opoznienieLine");
        opoznienieLine->setReadOnly(true);

        horizontalLayout->addWidget(opoznienieLine);

        opoznienieSpin = new QSpinBox(layoutWidget3);
        opoznienieSpin->setObjectName("opoznienieSpin");
        opoznienieSpin->setReadOnly(true);
        opoznienieSpin->setMinimum(1);
        opoznienieSpin->setValue(1);

        horizontalLayout->addWidget(opoznienieSpin);

        frame1 = new QFrame(tab_5);
        frame1->setObjectName("frame1");
        frame1->setGeometry(QRect(0, 220, 291, 121));
        frame1->setFrameShape(QFrame::Shape::Box);
        frame1->setLineWidth(1);
        obiektStatycznyLayout = new QVBoxLayout(frame1);
        obiektStatycznyLayout->setObjectName("obiektStatycznyLayout");
        obiektStatycznyLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        StaticInfoLine = new QLineEdit(frame1);
        StaticInfoLine->setObjectName("StaticInfoLine");
        StaticInfoLine->setReadOnly(true);

        obiektStatycznyLayout->addWidget(StaticInfoLine);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        preStatic_value = new QLineEdit(frame1);
        preStatic_value->setObjectName("preStatic_value");
        preStatic_value->setReadOnly(true);

        verticalLayout_15->addWidget(preStatic_value);

        preStatic_spin = new QDoubleSpinBox(frame1);
        preStatic_spin->setObjectName("preStatic_spin");
        preStatic_spin->setMinimum(-99.000000000000000);

        verticalLayout_15->addWidget(preStatic_spin);


        horizontalLayout_11->addLayout(verticalLayout_15);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        suStatic_value = new QLineEdit(frame1);
        suStatic_value->setObjectName("suStatic_value");
        suStatic_value->setReadOnly(true);

        verticalLayout_14->addWidget(suStatic_value);

        suStatic_spin = new QDoubleSpinBox(frame1);
        suStatic_spin->setObjectName("suStatic_spin");
        suStatic_spin->setMinimum(-99.000000000000000);

        verticalLayout_14->addWidget(suStatic_spin);


        horizontalLayout_11->addLayout(verticalLayout_14);


        obiektStatycznyLayout->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        PotwierdzStatyczny = new QPushButton(frame1);
        PotwierdzStatyczny->setObjectName("PotwierdzStatyczny");

        horizontalLayout_13->addWidget(PotwierdzStatyczny);

        stanStatyczny = new QPushButton(frame1);
        stanStatyczny->setObjectName("stanStatyczny");

        horizontalLayout_13->addWidget(stanStatyczny);


        obiektStatycznyLayout->addLayout(horizontalLayout_13);

        PotwierdzARX = new QPushButton(tab_5);
        PotwierdzARX->setObjectName("PotwierdzARX");
        PotwierdzARX->setGeometry(QRect(100, 160, 111, 31));
        PotwierdzARX->setFont(font1);
        PotwierdzARX->setStyleSheet(QString::fromUtf8("background:lightblue;\n"
"color:black;"));
        frame2 = new QFrame(tab_5);
        frame2->setObjectName("frame2");
        frame2->setGeometry(QRect(0, 350, 290, 91));
        frame2->setFrameShape(QFrame::Shape::Box);
        frame2->setLineWidth(1);
        regulatorLayout = new QHBoxLayout(frame2);
        regulatorLayout->setObjectName("regulatorLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pLabel = new QLabel(frame2);
        pLabel->setObjectName("pLabel");
        pLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(pLabel);

        dLabel = new QLabel(frame2);
        dLabel->setObjectName("dLabel");
        dLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(dLabel);

        iLabel = new QLabel(frame2);
        iLabel->setObjectName("iLabel");
        iLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(iLabel);


        regulatorLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pSpin = new QDoubleSpinBox(frame2);
        pSpin->setObjectName("pSpin");
        pSpin->setSingleStep(0.100000000000000);

        verticalLayout_2->addWidget(pSpin);

        iSpin = new QDoubleSpinBox(frame2);
        iSpin->setObjectName("iSpin");
        iSpin->setMaximum(9999.989999999999782);
        iSpin->setSingleStep(0.100000000000000);

        verticalLayout_2->addWidget(iSpin);

        dSpin = new QDoubleSpinBox(frame2);
        dSpin->setObjectName("dSpin");
        dSpin->setMaximum(99.989999999999995);
        dSpin->setSingleStep(0.100000000000000);

        verticalLayout_2->addWidget(dSpin);


        regulatorLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pWysw = new QLineEdit(frame2);
        pWysw->setObjectName("pWysw");
        pWysw->setReadOnly(true);

        verticalLayout_3->addWidget(pWysw);

        iWysw = new QLineEdit(frame2);
        iWysw->setObjectName("iWysw");
        iWysw->setReadOnly(true);

        verticalLayout_3->addWidget(iWysw);

        dWysw = new QLineEdit(frame2);
        dWysw->setObjectName("dWysw");
        dWysw->setReadOnly(true);

        verticalLayout_3->addWidget(dWysw);


        regulatorLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        pButton = new QPushButton(frame2);
        pButton->setObjectName("pButton");

        verticalLayout_4->addWidget(pButton);

        iButton = new QPushButton(frame2);
        iButton->setObjectName("iButton");

        verticalLayout_4->addWidget(iButton);

        dButton = new QPushButton(frame2);
        dButton->setObjectName("dButton");

        verticalLayout_4->addWidget(dButton);


        regulatorLayout->addLayout(verticalLayout_4);

        frame3 = new QFrame(tab_5);
        frame3->setObjectName("frame3");
        frame3->setGeometry(QRect(0, 490, 291, 115));
        frame3->setFrameShape(QFrame::Shape::Box);
        frame3->setLineWidth(1);
        graniceLayout = new QVBoxLayout(frame3);
        graniceLayout->setObjectName("graniceLayout");
        graniceLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_11 = new QLabel(frame3);
        label_11->setObjectName("label_11");

        verticalLayout_5->addWidget(label_11);

        gornaLine = new QLineEdit(frame3);
        gornaLine->setObjectName("gornaLine");
        gornaLine->setReadOnly(true);

        verticalLayout_5->addWidget(gornaLine);

        gornaSpin = new QDoubleSpinBox(frame3);
        gornaSpin->setObjectName("gornaSpin");
        gornaSpin->setMinimum(0.000000000000000);
        gornaSpin->setSingleStep(0.100000000000000);

        verticalLayout_5->addWidget(gornaSpin);


        horizontalLayout_10->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_12 = new QLabel(frame3);
        label_12->setObjectName("label_12");

        verticalLayout_7->addWidget(label_12);

        dolnaLine = new QLineEdit(frame3);
        dolnaLine->setObjectName("dolnaLine");
        dolnaLine->setReadOnly(true);

        verticalLayout_7->addWidget(dolnaLine);

        dolnaSpin = new QDoubleSpinBox(frame3);
        dolnaSpin->setObjectName("dolnaSpin");
        dolnaSpin->setMinimum(-99.000000000000000);
        dolnaSpin->setMaximum(0.000000000000000);
        dolnaSpin->setSingleStep(0.100000000000000);

        verticalLayout_7->addWidget(dolnaSpin);


        horizontalLayout_10->addLayout(verticalLayout_7);


        graniceLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        granicaWprowadzButton = new QPushButton(frame3);
        granicaWprowadzButton->setObjectName("granicaWprowadzButton");

        horizontalLayout_9->addWidget(granicaWprowadzButton);

        granicaStanButton = new QPushButton(frame3);
        granicaStanButton->setObjectName("granicaStanButton");

        horizontalLayout_9->addWidget(granicaStanButton);


        graniceLayout->addLayout(horizontalLayout_9);

        horizontalLayoutWidget_5 = new QWidget(tab_5);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(0, 450, 291, 31));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        sposob_sumy = new QPushButton(horizontalLayoutWidget_5);
        sposob_sumy->setObjectName("sposob_sumy");

        horizontalLayout_8->addWidget(sposob_sumy);

        clear_I = new QPushButton(horizontalLayoutWidget_5);
        clear_I->setObjectName("clear_I");

        horizontalLayout_8->addWidget(clear_I);

        clear_D = new QPushButton(horizontalLayoutWidget_5);
        clear_D->setObjectName("clear_D");

        horizontalLayout_8->addWidget(clear_D);

        horizontalFrame_3 = new QFrame(tab_5);
        horizontalFrame_3->setObjectName("horizontalFrame_3");
        horizontalFrame_3->setGeometry(QRect(0, 80, 211, 41));
        horizontalFrame_3->setFrameShape(QFrame::Shape::Box);
        horizontalFrame_3->setLineWidth(1);
        horizontalLayout_5 = new QHBoxLayout(horizontalFrame_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(horizontalFrame_3);
        label->setObjectName("label");
        label->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        horizontalLayout_5->addWidget(label);

        aRozmiarSpin = new QLabel(horizontalFrame_3);
        aRozmiarSpin->setObjectName("aRozmiarSpin");

        horizontalLayout_5->addWidget(aRozmiarSpin);

        horizontalFrame_2 = new QFrame(tab_5);
        horizontalFrame_2->setObjectName("horizontalFrame_2");
        horizontalFrame_2->setGeometry(QRect(0, 40, 301, 41));
        horizontalFrame_2->setFrameShape(QFrame::Shape::Box);
        horizontalFrame_2->setLineWidth(1);
        horizontalLayout_4 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(6, 6, 6, 6);
        label_2 = new QLabel(horizontalFrame_2);
        label_2->setObjectName("label_2");
        label_2->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        horizontalLayout_4->addWidget(label_2);

        bAktLine = new QLineEdit(horizontalFrame_2);
        bAktLine->setObjectName("bAktLine");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bAktLine->sizePolicy().hasHeightForWidth());
        bAktLine->setSizePolicy(sizePolicy1);
        bAktLine->setMinimumSize(QSize(35, 25));
        bAktLine->setMaximumSize(QSize(50, 25));
        bAktLine->setReadOnly(true);

        horizontalLayout_4->addWidget(bAktLine);

        label_4 = new QLabel(horizontalFrame_2);
        label_4->setObjectName("label_4");
        label_4->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        horizontalLayout_4->addWidget(label_4);

        bKtoraSpin = new QSpinBox(horizontalFrame_2);
        bKtoraSpin->setObjectName("bKtoraSpin");
        bKtoraSpin->setEnabled(true);
        bKtoraSpin->setMinimum(1);
        bKtoraSpin->setMaximum(1);

        horizontalLayout_4->addWidget(bKtoraSpin);

        horizontalFrame_4 = new QFrame(tab_5);
        horizontalFrame_4->setObjectName("horizontalFrame_4");
        horizontalFrame_4->setGeometry(QRect(0, 120, 301, 41));
        horizontalFrame_4->setFrameShape(QFrame::Shape::Box);
        horizontalFrame_4->setLineWidth(1);
        horizontalLayout_6 = new QHBoxLayout(horizontalFrame_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(6, 6, 6, 6);
        label_3 = new QLabel(horizontalFrame_4);
        label_3->setObjectName("label_3");
        label_3->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        horizontalLayout_6->addWidget(label_3);

        aAktLine = new QLineEdit(horizontalFrame_4);
        aAktLine->setObjectName("aAktLine");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(aAktLine->sizePolicy().hasHeightForWidth());
        aAktLine->setSizePolicy(sizePolicy2);
        aAktLine->setMinimumSize(QSize(35, 25));
        aAktLine->setMaximumSize(QSize(50, 25));
        aAktLine->setReadOnly(true);

        horizontalLayout_6->addWidget(aAktLine);

        label_5 = new QLabel(horizontalFrame_4);
        label_5->setObjectName("label_5");
        label_5->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        horizontalLayout_6->addWidget(label_5);

        aKtoraSpin = new QSpinBox(horizontalFrame_4);
        aKtoraSpin->setObjectName("aKtoraSpin");
        aKtoraSpin->setEnabled(true);
        aKtoraSpin->setMinimum(1);
        aKtoraSpin->setMaximum(1);

        horizontalLayout_6->addWidget(aKtoraSpin);

        horizontalFrame = new QFrame(tab_5);
        horizontalFrame->setObjectName("horizontalFrame");
        horizontalFrame->setGeometry(QRect(0, 0, 211, 41));
        horizontalFrame->setFrameShape(QFrame::Shape::Box);
        horizontalFrame->setLineWidth(1);
        horizontalLayout_2 = new QHBoxLayout(horizontalFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        label_6 = new QLabel(horizontalFrame);
        label_6->setObjectName("label_6");
        label_6->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        horizontalLayout_2->addWidget(label_6);

        bRozmiarSpin = new QLabel(horizontalFrame);
        bRozmiarSpin->setObjectName("bRozmiarSpin");

        horizontalLayout_2->addWidget(bRozmiarSpin);

        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayoutWidget_6 = new QWidget(tab_3);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(10, 30, 131, 80));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        TestARXLine = new QLineEdit(verticalLayoutWidget_6);
        TestARXLine->setObjectName("TestARXLine");
        TestARXLine->setReadOnly(true);

        verticalLayout_6->addWidget(TestARXLine);

        Testuj_ARX = new QPushButton(verticalLayoutWidget_6);
        Testuj_ARX->setObjectName("Testuj_ARX");

        verticalLayout_6->addWidget(Testuj_ARX);

        verticalLayoutWidget_10 = new QWidget(tab_3);
        verticalLayoutWidget_10->setObjectName("verticalLayoutWidget_10");
        verticalLayoutWidget_10->setGeometry(QRect(10, 130, 131, 401));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName("verticalLayout_22");
        testARX_0 = new QLineEdit(verticalLayoutWidget_10);
        testARX_0->setObjectName("testARX_0");
        testARX_0->setReadOnly(true);

        verticalLayout_22->addWidget(testARX_0);

        testARX_0_wyn = new QLineEdit(verticalLayoutWidget_10);
        testARX_0_wyn->setObjectName("testARX_0_wyn");
        testARX_0_wyn->setReadOnly(true);

        verticalLayout_22->addWidget(testARX_0_wyn);


        verticalLayout_10->addLayout(verticalLayout_22);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        testARX_skok1 = new QLineEdit(verticalLayoutWidget_10);
        testARX_skok1->setObjectName("testARX_skok1");
        testARX_skok1->setReadOnly(true);

        verticalLayout_21->addWidget(testARX_skok1);

        testARX_skok1_wyn = new QLineEdit(verticalLayoutWidget_10);
        testARX_skok1_wyn->setObjectName("testARX_skok1_wyn");
        testARX_skok1_wyn->setReadOnly(true);

        verticalLayout_21->addWidget(testARX_skok1_wyn);


        verticalLayout_10->addLayout(verticalLayout_21);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");
        testARX_skok2 = new QLineEdit(verticalLayoutWidget_10);
        testARX_skok2->setObjectName("testARX_skok2");
        testARX_skok2->setReadOnly(true);

        verticalLayout_20->addWidget(testARX_skok2);

        testARX_skok2_wyn = new QLineEdit(verticalLayoutWidget_10);
        testARX_skok2_wyn->setObjectName("testARX_skok2_wyn");
        testARX_skok2_wyn->setReadOnly(true);

        verticalLayout_20->addWidget(testARX_skok2_wyn);


        verticalLayout_10->addLayout(verticalLayout_20);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        testARX_skok3 = new QLineEdit(verticalLayoutWidget_10);
        testARX_skok3->setObjectName("testARX_skok3");
        testARX_skok3->setReadOnly(true);

        verticalLayout_19->addWidget(testARX_skok3);

        testARX_skok3_wyn = new QLineEdit(verticalLayoutWidget_10);
        testARX_skok3_wyn->setObjectName("testARX_skok3_wyn");
        testARX_skok3_wyn->setReadOnly(true);

        verticalLayout_19->addWidget(testARX_skok3_wyn);


        verticalLayout_10->addLayout(verticalLayout_19);

        tabWidget->addTab(tab_3, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        verticalLayoutWidget_8 = new QWidget(tab_8);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(0, 0, 131, 80));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        TestPIDLine = new QLineEdit(verticalLayoutWidget_8);
        TestPIDLine->setObjectName("TestPIDLine");
        TestPIDLine->setReadOnly(true);

        verticalLayout_8->addWidget(TestPIDLine);

        Testuj_PID = new QPushButton(verticalLayoutWidget_8);
        Testuj_PID->setObjectName("Testuj_PID");

        verticalLayout_8->addWidget(Testuj_PID);

        verticalLayoutWidget_21 = new QWidget(tab_8);
        verticalLayoutWidget_21->setObjectName("verticalLayoutWidget_21");
        verticalLayoutWidget_21->setGeometry(QRect(0, 80, 131, 401));
        verticalLayout_27 = new QVBoxLayout(verticalLayoutWidget_21);
        verticalLayout_27->setObjectName("verticalLayout_27");
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName("verticalLayout_28");
        testP_0 = new QLineEdit(verticalLayoutWidget_21);
        testP_0->setObjectName("testP_0");
        testP_0->setReadOnly(true);

        verticalLayout_28->addWidget(testP_0);

        testP_0_wyn = new QLineEdit(verticalLayoutWidget_21);
        testP_0_wyn->setObjectName("testP_0_wyn");
        testP_0_wyn->setReadOnly(true);

        verticalLayout_28->addWidget(testP_0_wyn);


        verticalLayout_27->addLayout(verticalLayout_28);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName("verticalLayout_29");
        testP_skok = new QLineEdit(verticalLayoutWidget_21);
        testP_skok->setObjectName("testP_skok");
        testP_skok->setReadOnly(true);

        verticalLayout_29->addWidget(testP_skok);

        testP_skok_wyn = new QLineEdit(verticalLayoutWidget_21);
        testP_skok_wyn->setObjectName("testP_skok_wyn");
        testP_skok_wyn->setReadOnly(true);

        verticalLayout_29->addWidget(testP_skok_wyn);


        verticalLayout_27->addLayout(verticalLayout_29);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        testPI_skok1 = new QLineEdit(verticalLayoutWidget_21);
        testPI_skok1->setObjectName("testPI_skok1");
        testPI_skok1->setReadOnly(true);

        verticalLayout_16->addWidget(testPI_skok1);

        testPI_skok1_wyn = new QLineEdit(verticalLayoutWidget_21);
        testPI_skok1_wyn->setObjectName("testPI_skok1_wyn");
        testPI_skok1_wyn->setReadOnly(true);

        verticalLayout_16->addWidget(testPI_skok1_wyn);


        verticalLayout_27->addLayout(verticalLayout_16);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setObjectName("verticalLayout_30");
        testPI_skok2 = new QLineEdit(verticalLayoutWidget_21);
        testPI_skok2->setObjectName("testPI_skok2");
        testPI_skok2->setReadOnly(true);

        verticalLayout_30->addWidget(testPI_skok2);

        testPI_skok2_wyn = new QLineEdit(verticalLayoutWidget_21);
        testPI_skok2_wyn->setObjectName("testPI_skok2_wyn");
        testPI_skok2_wyn->setReadOnly(true);

        verticalLayout_30->addWidget(testPI_skok2_wyn);


        verticalLayout_27->addLayout(verticalLayout_30);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName("verticalLayout_31");
        testPID_skok = new QLineEdit(verticalLayoutWidget_21);
        testPID_skok->setObjectName("testPID_skok");
        testPID_skok->setReadOnly(true);

        verticalLayout_31->addWidget(testPID_skok);

        testPID_skok_wyn = new QLineEdit(verticalLayoutWidget_21);
        testPID_skok_wyn->setObjectName("testPID_skok_wyn");
        testPID_skok_wyn->setReadOnly(true);

        verticalLayout_31->addWidget(testPID_skok_wyn);


        verticalLayout_27->addLayout(verticalLayout_31);

        tabWidget->addTab(tab_8, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayoutWidget_9 = new QWidget(tab_4);
        verticalLayoutWidget_9->setObjectName("verticalLayoutWidget_9");
        verticalLayoutWidget_9->setGeometry(QRect(0, 0, 131, 80));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        TestUARLine = new QLineEdit(verticalLayoutWidget_9);
        TestUARLine->setObjectName("TestUARLine");
        TestUARLine->setReadOnly(true);

        verticalLayout_9->addWidget(TestUARLine);

        Testuj_UAR = new QPushButton(verticalLayoutWidget_9);
        Testuj_UAR->setObjectName("Testuj_UAR");

        verticalLayout_9->addWidget(Testuj_UAR);

        verticalLayoutWidget_12 = new QWidget(tab_4);
        verticalLayoutWidget_12->setObjectName("verticalLayoutWidget_12");
        verticalLayoutWidget_12->setGeometry(QRect(0, 80, 131, 401));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget_12);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName("verticalLayout_23");
        testUAR_0 = new QLineEdit(verticalLayoutWidget_12);
        testUAR_0->setObjectName("testUAR_0");
        testUAR_0->setReadOnly(true);

        verticalLayout_23->addWidget(testUAR_0);

        testUAR_0_wyn = new QLineEdit(verticalLayoutWidget_12);
        testUAR_0_wyn->setObjectName("testUAR_0_wyn");
        testUAR_0_wyn->setReadOnly(true);

        verticalLayout_23->addWidget(testUAR_0_wyn);


        verticalLayout_12->addLayout(verticalLayout_23);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName("verticalLayout_24");
        testUAR_skok1 = new QLineEdit(verticalLayoutWidget_12);
        testUAR_skok1->setObjectName("testUAR_skok1");
        testUAR_skok1->setReadOnly(true);

        verticalLayout_24->addWidget(testUAR_skok1);

        testUAR_skok1_wyn = new QLineEdit(verticalLayoutWidget_12);
        testUAR_skok1_wyn->setObjectName("testUAR_skok1_wyn");
        testUAR_skok1_wyn->setReadOnly(true);

        verticalLayout_24->addWidget(testUAR_skok1_wyn);


        verticalLayout_12->addLayout(verticalLayout_24);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName("verticalLayout_25");
        testUAR_skok2 = new QLineEdit(verticalLayoutWidget_12);
        testUAR_skok2->setObjectName("testUAR_skok2");
        testUAR_skok2->setReadOnly(true);

        verticalLayout_25->addWidget(testUAR_skok2);

        testUAR_skok2_wyn = new QLineEdit(verticalLayoutWidget_12);
        testUAR_skok2_wyn->setObjectName("testUAR_skok2_wyn");
        testUAR_skok2_wyn->setReadOnly(true);

        verticalLayout_25->addWidget(testUAR_skok2_wyn);


        verticalLayout_12->addLayout(verticalLayout_25);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName("verticalLayout_26");
        testUAR_skok3 = new QLineEdit(verticalLayoutWidget_12);
        testUAR_skok3->setObjectName("testUAR_skok3");
        testUAR_skok3->setReadOnly(true);

        verticalLayout_26->addWidget(testUAR_skok3);

        testUAR_skok3_wyn = new QLineEdit(verticalLayoutWidget_12);
        testUAR_skok3_wyn->setObjectName("testUAR_skok3_wyn");
        testUAR_skok3_wyn->setReadOnly(true);

        verticalLayout_26->addWidget(testUAR_skok3_wyn);


        verticalLayout_12->addLayout(verticalLayout_26);

        tabWidget->addTab(tab_4, QString());

        horizontalLayout_7->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1194, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(resetButton, stopButton);
        QWidget::setTabOrder(stopButton, startButton);
        QWidget::setTabOrder(startButton, krokButton);
        QWidget::setTabOrder(krokButton, sledzWartosciCombo);
        QWidget::setTabOrder(sledzWartosciCombo, sledzPIDCombo);
        QWidget::setTabOrder(sledzPIDCombo, szybkoscSimSpin);
        QWidget::setTabOrder(szybkoscSimSpin, speedButton);
        QWidget::setTabOrder(speedButton, zapiszButton);
        QWidget::setTabOrder(zapiszButton, wczytajButton);
        QWidget::setTabOrder(wczytajButton, skokButton);
        QWidget::setTabOrder(skokButton, sinusoidaButton);
        QWidget::setTabOrder(sinusoidaButton, prostokatButton);
        QWidget::setTabOrder(prostokatButton, ampSkokSpin);
        QWidget::setTabOrder(ampSkokSpin, ampSinusSpin);
        QWidget::setTabOrder(ampSinusSpin, ampProstokatSpin);
        QWidget::setTabOrder(ampProstokatSpin, okresLine);
        QWidget::setTabOrder(okresLine, wypelnienieLine);
        QWidget::setTabOrder(wypelnienieLine, gornaSpin);
        QWidget::setTabOrder(gornaSpin, dolnaSpin);
        QWidget::setTabOrder(dolnaSpin, gornaLine);
        QWidget::setTabOrder(gornaLine, dolnaLine);
        QWidget::setTabOrder(dolnaLine, granicaWprowadzButton);
        QWidget::setTabOrder(granicaWprowadzButton, PotwierdButton);
        QWidget::setTabOrder(PotwierdButton, okresProstokatSpin);
        QWidget::setTabOrder(okresProstokatSpin, opoznienieSpin);
        QWidget::setTabOrder(opoznienieSpin, opoznienieLine);
        QWidget::setTabOrder(opoznienieLine, szumLine);
        QWidget::setTabOrder(szumLine, szumSpin);
        QWidget::setTabOrder(szumSpin, granicaStanButton);
        QWidget::setTabOrder(granicaStanButton, PpLine);
        QWidget::setTabOrder(PpLine, ApLine);
        QWidget::setTabOrder(ApLine, wypelnienieProstokatSpin);
        QWidget::setTabOrder(wypelnienieProstokatSpin, StaticInfoLine);
        QWidget::setTabOrder(StaticInfoLine, zapiszButton_all);
        QWidget::setTabOrder(zapiszButton_all, wczytajButton_all);
        QWidget::setTabOrder(wczytajButton_all, TestARXLine);
        QWidget::setTabOrder(TestARXLine, Testuj_ARX);
        QWidget::setTabOrder(Testuj_ARX, TestPIDLine);
        QWidget::setTabOrder(TestPIDLine, Testuj_PID);
        QWidget::setTabOrder(Testuj_PID, TestUARLine);
        QWidget::setTabOrder(TestUARLine, Testuj_UAR);
        QWidget::setTabOrder(Testuj_UAR, testARX_0);
        QWidget::setTabOrder(testARX_0, testARX_0_wyn);
        QWidget::setTabOrder(testARX_0_wyn, testARX_skok1);
        QWidget::setTabOrder(testARX_skok1, testARX_skok1_wyn);
        QWidget::setTabOrder(testARX_skok1_wyn, testARX_skok2);
        QWidget::setTabOrder(testARX_skok2, testARX_skok2_wyn);
        QWidget::setTabOrder(testARX_skok2_wyn, testARX_skok3);
        QWidget::setTabOrder(testARX_skok3, testARX_skok3_wyn);
        QWidget::setTabOrder(testARX_skok3_wyn, testUAR_0);
        QWidget::setTabOrder(testUAR_0, testUAR_0_wyn);
        QWidget::setTabOrder(testUAR_0_wyn, testUAR_skok1);
        QWidget::setTabOrder(testUAR_skok1, testUAR_skok1_wyn);
        QWidget::setTabOrder(testUAR_skok1_wyn, testUAR_skok2);
        QWidget::setTabOrder(testUAR_skok2, testUAR_skok2_wyn);
        QWidget::setTabOrder(testUAR_skok2_wyn, testUAR_skok3);
        QWidget::setTabOrder(testUAR_skok3, testUAR_skok3_wyn);
        QWidget::setTabOrder(testUAR_skok3_wyn, testP_0);
        QWidget::setTabOrder(testP_0, testP_0_wyn);
        QWidget::setTabOrder(testP_0_wyn, testP_skok);
        QWidget::setTabOrder(testP_skok, testP_skok_wyn);
        QWidget::setTabOrder(testP_skok_wyn, testPI_skok1);
        QWidget::setTabOrder(testPI_skok1, testPI_skok1_wyn);
        QWidget::setTabOrder(testPI_skok1_wyn, testPI_skok2);
        QWidget::setTabOrder(testPI_skok2, testPI_skok2_wyn);
        QWidget::setTabOrder(testPI_skok2_wyn, testPID_skok);
        QWidget::setTabOrder(testPID_skok, testPID_skok_wyn);
        QWidget::setTabOrder(testPID_skok_wyn, pSpin);
        QWidget::setTabOrder(pSpin, iSpin);
        QWidget::setTabOrder(iSpin, dSpin);
        QWidget::setTabOrder(dSpin, pWysw);
        QWidget::setTabOrder(pWysw, iWysw);
        QWidget::setTabOrder(iWysw, dWysw);
        QWidget::setTabOrder(dWysw, pButton);
        QWidget::setTabOrder(pButton, iButton);
        QWidget::setTabOrder(iButton, dButton);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        krokButton->setText(QCoreApplication::translate("MainWindow", "Krok", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        speedButton->setText(QCoreApplication::translate("MainWindow", "Ped simu", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        sledzWartosciCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Sledz wartosci", nullptr));
        sledzWartosciCombo->setItemText(1, QCoreApplication::translate("MainWindow", "Sledz biezace wartosci", nullptr));
        sledzWartosciCombo->setItemText(2, QCoreApplication::translate("MainWindow", "Zwolnij sledzenie wartosci", nullptr));
        sledzWartosciCombo->setItemText(3, QString());

        sledzUchybCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Sledz uchyb", nullptr));
        sledzUchybCombo->setItemText(1, QCoreApplication::translate("MainWindow", "Sledz biezacy uchyb", nullptr));
        sledzUchybCombo->setItemText(2, QCoreApplication::translate("MainWindow", "Zwolnij sledz uchyb", nullptr));

        sledzPIDCombo->setItemText(0, QCoreApplication::translate("MainWindow", "sledz nastawy", nullptr));
        sledzPIDCombo->setItemText(1, QCoreApplication::translate("MainWindow", "sledz biezace nastawy", nullptr));
        sledzPIDCombo->setItemText(2, QCoreApplication::translate("MainWindow", "zwolnij sledzenie nastaw", nullptr));

        skokButton->setText(QCoreApplication::translate("MainWindow", "SKOK", nullptr));
        sinusoidaButton->setText(QCoreApplication::translate("MainWindow", "SINUSOIDA", nullptr));
        PpLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ApLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        amplitudaLine->setText(QCoreApplication::translate("MainWindow", "Amp", nullptr));
        AsLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        AjLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        prostokatButton->setText(QCoreApplication::translate("MainWindow", "PROSTOKATNY", nullptr));
        okresLine->setText(QCoreApplication::translate("MainWindow", "Okres", nullptr));
        TpLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        TsLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        wypelnienieLine->setText(QCoreApplication::translate("MainWindow", "Wype\305\202nienie", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "konfig", nullptr));
        zapiszButton->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
        wczytajButton->setText(QCoreApplication::translate("MainWindow", "Wczytaj", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "all", nullptr));
        zapiszButton_all->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
        wczytajButton_all->setText(QCoreApplication::translate("MainWindow", "Wczytaj", nullptr));
        PotwierdButton->setText(QCoreApplication::translate("MainWindow", "Wprowadz", nullptr));
        insert->setText(QCoreApplication::translate("MainWindow", "Recznie/Auto aktualizuj", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        szumLine->setText(QCoreApplication::translate("MainWindow", "szum", nullptr));
        opoznienieLine->setText(QCoreApplication::translate("MainWindow", "Opoznienie", nullptr));
        StaticInfoLine->setText(QCoreApplication::translate("MainWindow", "obiekt stat przed / po ARX", nullptr));
        preStatic_value->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        suStatic_value->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        PotwierdzStatyczny->setText(QCoreApplication::translate("MainWindow", "Wprowadz", nullptr));
        stanStatyczny->setText(QCoreApplication::translate("MainWindow", "W\305\202\304\205cz", nullptr));
        PotwierdzARX->setText(QCoreApplication::translate("MainWindow", "Wprowadz", nullptr));
        pLabel->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        dLabel->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        iLabel->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        pWysw->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        iWysw->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        dWysw->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pButton->setText(QCoreApplication::translate("MainWindow", "Wprowadz", nullptr));
        iButton->setText(QCoreApplication::translate("MainWindow", "Wprowadz", nullptr));
        dButton->setText(QCoreApplication::translate("MainWindow", "Wprowadz", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "G\303\263rna Granica", nullptr));
        gornaLine->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Dolna Granica", nullptr));
        dolnaLine->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        granicaWprowadzButton->setText(QCoreApplication::translate("MainWindow", "Wprowadz", nullptr));
        granicaStanButton->setText(QCoreApplication::translate("MainWindow", "W\305\202\304\205cz", nullptr));
        sposob_sumy->setText(QCoreApplication::translate("MainWindow", "Suma: Przed", nullptr));
        clear_I->setText(QCoreApplication::translate("MainWindow", "clear Ca\305\202kuj\304\205cy", nullptr));
        clear_D->setText(QCoreApplication::translate("MainWindow", "clear R\303\263\305\274niczkuj\304\205cy", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "A: Rozmiar", nullptr));
        aRozmiarSpin->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207:", nullptr));
        bAktLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Wsp\303\263\305\202czynnik:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207:", nullptr));
        aAktLine->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Wsp\303\263\305\202czynnik:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "B: Rozmiar", nullptr));
        bRozmiarSpin->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Page", nullptr));
        TestARXLine->setText(QCoreApplication::translate("MainWindow", "Test ARX", nullptr));
        Testuj_ARX->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        testARX_0->setText(QCoreApplication::translate("MainWindow", "Test 0 pobudzenia", nullptr));
        testARX_skok1->setText(QCoreApplication::translate("MainWindow", "Test skok 1", nullptr));
        testARX_skok2->setText(QCoreApplication::translate("MainWindow", "Test skok 2", nullptr));
        testARX_skok3->setText(QCoreApplication::translate("MainWindow", "Test skok 3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Strona", nullptr));
        TestPIDLine->setText(QCoreApplication::translate("MainWindow", "Test PID", nullptr));
        Testuj_PID->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        testP_0->setText(QCoreApplication::translate("MainWindow", "Test P 0 pobudzenia", nullptr));
        testP_skok->setText(QCoreApplication::translate("MainWindow", "Test P skok", nullptr));
        testPI_skok1->setText(QCoreApplication::translate("MainWindow", "Test PI skok 1", nullptr));
        testPI_skok2->setText(QCoreApplication::translate("MainWindow", "Test PI skok 2", nullptr));
        testPID_skok->setText(QCoreApplication::translate("MainWindow", "Test PID skok", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Page", nullptr));
        TestUARLine->setText(QCoreApplication::translate("MainWindow", "Test UAR", nullptr));
        Testuj_UAR->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        testUAR_0->setText(QCoreApplication::translate("MainWindow", "Test UAR 0 pobudzenia", nullptr));
        testUAR_skok1->setText(QCoreApplication::translate("MainWindow", "Test UAR skok 1", nullptr));
        testUAR_skok2->setText(QCoreApplication::translate("MainWindow", "Test UAR skok 2", nullptr));
        testUAR_skok3->setText(QCoreApplication::translate("MainWindow", "Test UAR skok 3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
