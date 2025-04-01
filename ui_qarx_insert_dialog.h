/********************************************************************************
** Form generated from reading UI file 'qarx_insert_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QARX_INSERT_DIALOG_H
#define UI_QARX_INSERT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QARX_insert_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpinBox *bRozmiarSpin;
    QPushButton *bButton;
    QFrame *horizontalFrame_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpinBox *aRozmiarSpin;
    QPushButton *aButton;
    QFrame *horizontalFrame_4;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *aAktLine;
    QPushButton *aWartButton;
    QDoubleSpinBox *aWartSpin;
    QPushButton *pushButton_2;
    QSpinBox *aKtoraSpin;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *bAktLine;
    QPushButton *pushButton;
    QDoubleSpinBox *bWartSpin;
    QPushButton *bWartButton;
    QSpinBox *bKtoraSpin;
    QHBoxLayout *horizontalLayout;
    QLineEdit *opoznienieLine;
    QSpinBox *opoznienieSpin;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *szumLine;
    QSpinBox *szumSpin;

    void setupUi(QDialog *QARX_insert_Dialog)
    {
        if (QARX_insert_Dialog->objectName().isEmpty())
            QARX_insert_Dialog->setObjectName("QARX_insert_Dialog");
        QARX_insert_Dialog->resize(458, 278);
        buttonBox = new QDialogButtonBox(QARX_insert_Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(70, 220, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(QARX_insert_Dialog);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 10, 405, 197));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalFrame = new QFrame(formLayoutWidget);
        horizontalFrame->setObjectName("horizontalFrame");
        horizontalFrame->setFrameShape(QFrame::Shape::Box);
        horizontalFrame->setLineWidth(1);
        horizontalLayout_2 = new QHBoxLayout(horizontalFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        label_6 = new QLabel(horizontalFrame);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        bRozmiarSpin = new QSpinBox(horizontalFrame);
        bRozmiarSpin->setObjectName("bRozmiarSpin");
        bRozmiarSpin->setMinimum(1);
        bRozmiarSpin->setMaximum(10);

        horizontalLayout_2->addWidget(bRozmiarSpin);

        bButton = new QPushButton(horizontalFrame);
        bButton->setObjectName("bButton");

        horizontalLayout_2->addWidget(bButton);


        formLayout->setWidget(0, QFormLayout::LabelRole, horizontalFrame);

        horizontalFrame_3 = new QFrame(formLayoutWidget);
        horizontalFrame_3->setObjectName("horizontalFrame_3");
        horizontalFrame_3->setFrameShape(QFrame::Shape::Box);
        horizontalFrame_3->setLineWidth(1);
        horizontalLayout_5 = new QHBoxLayout(horizontalFrame_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(horizontalFrame_3);
        label->setObjectName("label");

        horizontalLayout_5->addWidget(label);

        aRozmiarSpin = new QSpinBox(horizontalFrame_3);
        aRozmiarSpin->setObjectName("aRozmiarSpin");
        aRozmiarSpin->setMinimum(1);
        aRozmiarSpin->setMaximum(10);

        horizontalLayout_5->addWidget(aRozmiarSpin);

        aButton = new QPushButton(horizontalFrame_3);
        aButton->setObjectName("aButton");

        horizontalLayout_5->addWidget(aButton);


        formLayout->setWidget(2, QFormLayout::LabelRole, horizontalFrame_3);

        horizontalFrame_4 = new QFrame(formLayoutWidget);
        horizontalFrame_4->setObjectName("horizontalFrame_4");
        horizontalFrame_4->setFrameShape(QFrame::Shape::Box);
        horizontalFrame_4->setLineWidth(1);
        horizontalLayout_6 = new QHBoxLayout(horizontalFrame_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(6, 6, 6, 6);
        aAktLine = new QLineEdit(horizontalFrame_4);
        aAktLine->setObjectName("aAktLine");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aAktLine->sizePolicy().hasHeightForWidth());
        aAktLine->setSizePolicy(sizePolicy);
        aAktLine->setMinimumSize(QSize(35, 25));
        aAktLine->setMaximumSize(QSize(50, 25));
        aAktLine->setReadOnly(true);

        horizontalLayout_6->addWidget(aAktLine);

        aWartButton = new QPushButton(horizontalFrame_4);
        aWartButton->setObjectName("aWartButton");
        aWartButton->setEnabled(true);

        horizontalLayout_6->addWidget(aWartButton);

        aWartSpin = new QDoubleSpinBox(horizontalFrame_4);
        aWartSpin->setObjectName("aWartSpin");
        aWartSpin->setEnabled(true);
        sizePolicy.setHeightForWidth(aWartSpin->sizePolicy().hasHeightForWidth());
        aWartSpin->setSizePolicy(sizePolicy);
        aWartSpin->setMinimumSize(QSize(70, 0));
        aWartSpin->setMinimum(-99.000000000000000);
        aWartSpin->setSingleStep(0.100000000000000);

        horizontalLayout_6->addWidget(aWartSpin);

        pushButton_2 = new QPushButton(horizontalFrame_4);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_6->addWidget(pushButton_2);

        aKtoraSpin = new QSpinBox(horizontalFrame_4);
        aKtoraSpin->setObjectName("aKtoraSpin");
        aKtoraSpin->setEnabled(true);
        aKtoraSpin->setMinimum(1);
        aKtoraSpin->setMaximum(1);

        horizontalLayout_6->addWidget(aKtoraSpin);


        formLayout->setWidget(3, QFormLayout::SpanningRole, horizontalFrame_4);

        horizontalFrame_2 = new QFrame(formLayoutWidget);
        horizontalFrame_2->setObjectName("horizontalFrame_2");
        horizontalFrame_2->setFrameShape(QFrame::Shape::Box);
        horizontalFrame_2->setLineWidth(1);
        horizontalLayout_4 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(6, 6, 6, 6);
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

        pushButton = new QPushButton(horizontalFrame_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout_4->addWidget(pushButton);

        bWartSpin = new QDoubleSpinBox(horizontalFrame_2);
        bWartSpin->setObjectName("bWartSpin");
        bWartSpin->setEnabled(true);
        bWartSpin->setMinimumSize(QSize(70, 0));
        bWartSpin->setMinimum(-99.000000000000000);
        bWartSpin->setSingleStep(0.100000000000000);

        horizontalLayout_4->addWidget(bWartSpin);

        bWartButton = new QPushButton(horizontalFrame_2);
        bWartButton->setObjectName("bWartButton");
        bWartButton->setEnabled(true);

        horizontalLayout_4->addWidget(bWartButton);

        bKtoraSpin = new QSpinBox(horizontalFrame_2);
        bKtoraSpin->setObjectName("bKtoraSpin");
        bKtoraSpin->setEnabled(true);
        bKtoraSpin->setMinimum(1);
        bKtoraSpin->setMaximum(1);

        horizontalLayout_4->addWidget(bKtoraSpin);


        formLayout->setWidget(1, QFormLayout::SpanningRole, horizontalFrame_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        opoznienieLine = new QLineEdit(formLayoutWidget);
        opoznienieLine->setObjectName("opoznienieLine");
        opoznienieLine->setReadOnly(true);

        horizontalLayout->addWidget(opoznienieLine);

        opoznienieSpin = new QSpinBox(formLayoutWidget);
        opoznienieSpin->setObjectName("opoznienieSpin");
        opoznienieSpin->setMinimum(1);
        opoznienieSpin->setValue(1);

        horizontalLayout->addWidget(opoznienieSpin);


        formLayout->setLayout(4, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        szumLine = new QLineEdit(formLayoutWidget);
        szumLine->setObjectName("szumLine");

        horizontalLayout_3->addWidget(szumLine);

        szumSpin = new QSpinBox(formLayoutWidget);
        szumSpin->setObjectName("szumSpin");
        szumSpin->setValue(1);

        horizontalLayout_3->addWidget(szumSpin);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_3);


        retranslateUi(QARX_insert_Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QARX_insert_Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QARX_insert_Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(QARX_insert_Dialog);
    } // setupUi

    void retranslateUi(QDialog *QARX_insert_Dialog)
    {
        QARX_insert_Dialog->setWindowTitle(QCoreApplication::translate("QARX_insert_Dialog", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("QARX_insert_Dialog", "B", nullptr));
        bButton->setText(QCoreApplication::translate("QARX_insert_Dialog", "Rozmiar", nullptr));
        label->setText(QCoreApplication::translate("QARX_insert_Dialog", "A", nullptr));
        aButton->setText(QCoreApplication::translate("QARX_insert_Dialog", "Rozmiar", nullptr));
        aAktLine->setText(QCoreApplication::translate("QARX_insert_Dialog", "0", nullptr));
        aWartButton->setText(QCoreApplication::translate("QARX_insert_Dialog", "Wartosc", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QARX_insert_Dialog", "Ktore", nullptr));
        bAktLine->setText(QCoreApplication::translate("QARX_insert_Dialog", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("QARX_insert_Dialog", "Warto\305\233\304\207", nullptr));
        bWartButton->setText(QCoreApplication::translate("QARX_insert_Dialog", "Ktore", nullptr));
        opoznienieLine->setText(QCoreApplication::translate("QARX_insert_Dialog", "Opoznienie", nullptr));
        szumLine->setText(QCoreApplication::translate("QARX_insert_Dialog", "szum 0,01 odch.std", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QARX_insert_Dialog: public Ui_QARX_insert_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QARX_INSERT_DIALOG_H
