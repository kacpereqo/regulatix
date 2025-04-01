#ifndef QARX_INSERT_DIALOG_H
#define QARX_INSERT_DIALOG_H

#include <QDialog>
#include <qarx.h>

namespace Ui {
class QARX_insert_Dialog;
}

class QARX_insert_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit QARX_insert_Dialog(QByteArray QUAR, QWidget *parent = nullptr);
    ~QARX_insert_Dialog();

    QByteArray get_QARX();

private slots:
    void on_bRozmiarSpin_valueChanged(int arg1);

    void on_bWartSpin_valueChanged(double arg1);

    void on_bKtoraSpin_valueChanged(int arg1);

    void on_aRozmiarSpin_valueChanged(int arg1);

    void on_aWartSpin_valueChanged(double arg1);

    void on_aKtoraSpin_valueChanged(int arg1);

    void on_opoznienieSpin_valueChanged(int arg1);

    void on_szumSpin_valueChanged(int arg1);

private:
    Ui::QARX_insert_Dialog *ui;

    QARX* dialog_QARX;

    void update_QARX();



};

#endif // QARX_INSERT_DIALOG_H
