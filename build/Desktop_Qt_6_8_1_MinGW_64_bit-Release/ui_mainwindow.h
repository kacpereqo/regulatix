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

        horizontalLayout_7->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1194, 21));
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
        QWidget::setTabOrder(wczytajButton_all, pSpin);
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
