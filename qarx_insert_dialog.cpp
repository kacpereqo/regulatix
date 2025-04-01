#include "qarx_insert_dialog.h"
#include "ui_qarx_insert_dialog.h"

QARX_insert_Dialog::QARX_insert_Dialog(QByteArray QUAR, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QARX_insert_Dialog)
    , dialog_QARX(new QARX(this))
{
    ui->setupUi(this);
    dialog_QARX->deserialize_all(QUAR, false);
    auto size_B = dialog_QARX->get_sizeB(), size_A = dialog_QARX->get_sizeA();
    auto B = dialog_QARX->get_B(0), A = dialog_QARX->get_A(0);
    auto noise = dialog_QARX->get_noise()*100;
    auto delay = dialog_QARX->get_delay();
    ui->bRozmiarSpin->setValue(size_B);
    ui->aRozmiarSpin->setValue(size_A);
    ui->bWartSpin->setValue(B);
    ui->aWartSpin->setValue(A);
    ui->szumSpin->setValue(noise);
    ui->opoznienieSpin->setValue(delay);
}

QARX_insert_Dialog::~QARX_insert_Dialog()
{
    delete ui;
}

QByteArray QARX_insert_Dialog::get_QARX()
{
    return dialog_QARX->serialize_all(false);
}

void QARX_insert_Dialog::update_QARX()
{
    dialog_QARX->set_noise(ui->szumSpin->value() * 0.01);
    dialog_QARX->set_delay(ui->opoznienieSpin->value());
    dialog_QARX->set_A(ui->aWartSpin->value(),
                            ui->aKtoraSpin->value() - 1,
                            ui->aRozmiarSpin->value());
    dialog_QARX->set_B(ui->bWartSpin->value(),
                            ui->bKtoraSpin->value() - 1,
                            ui->bRozmiarSpin->value());
}

void QARX_insert_Dialog::on_bRozmiarSpin_valueChanged(int arg1)
{
    if (arg1 < ui->bKtoraSpin->value())
        ui->bKtoraSpin->setValue(arg1);
    ui->bKtoraSpin->setMaximum(arg1);
    update_QARX();
}


void QARX_insert_Dialog::on_bWartSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    update_QARX();
    on_bKtoraSpin_valueChanged(ui->bKtoraSpin->value());
}


void QARX_insert_Dialog::on_bKtoraSpin_valueChanged(int arg1)
{
    ui->bAktLine->setText(QString::number((arg1 - 1 < dialog_QARX->get_sizeB()) ? dialog_QARX->get_B(arg1 - 1) : 0));
}


void QARX_insert_Dialog::on_aRozmiarSpin_valueChanged(int arg1)
{
    ui->aKtoraSpin->setMaximum(arg1);
    if (arg1 < ui->aKtoraSpin->value())
    {
        ui->aKtoraSpin->setValue(arg1);
        update_QARX();
    }

}


void QARX_insert_Dialog::on_aWartSpin_valueChanged(double arg1)
{
    Q_UNUSED(arg1);
    update_QARX();
    on_aKtoraSpin_valueChanged(ui->aKtoraSpin->value());
}


void QARX_insert_Dialog::on_aKtoraSpin_valueChanged(int arg1)
{
    ui->aAktLine->setText(QString::number((arg1 - 1 < dialog_QARX->get_sizeA()) ? dialog_QARX->get_A(arg1 - 1) : 0));
}


void QARX_insert_Dialog::on_opoznienieSpin_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    update_QARX();
}


void QARX_insert_Dialog::on_szumSpin_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    update_QARX();
}

