#include "generator.h"
#include "ui_generator.h"
#include <QMessageBox>

Generator::Generator(Parameters *parameters, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Generator), parameters(parameters)
{
    ui->setupUi(this);

    connect(ui->buttonBox,&QDialogButtonBox::accepted,this, &Generator::ok);

    ui->textEdit0->setText(QString::number(parameters->zero));
    ui->textEdit1->setText(QString::number(parameters->first));
    ui->textEdit2->setText(QString::number(parameters->second));

    switch(parameters->type)
    {
    case GeneratorType::Single:
        ui->parameter0->setText("Amplituda");
        ui->parameter1->setText("Impuls aktywacji");
        ui->parameter2->setText("");
        ui->textEdit2->hide();
        break;
    case GeneratorType::Rectangle:
        ui->parameter0->setText("Amplituda");
        ui->parameter1->setText("Okres");
        ui->parameter2->setText("Wypełnienie");
        break;
    case GeneratorType::Sinus:
        ui->parameter0->setText("Amplituda");
        ui->parameter1->setText("Okres");
        ui->parameter2->setText("");
        ui->textEdit2->hide();
        break;
    }
}

Generator::~Generator()
{
    delete ui;
}
void Generator::ok()
{
    bool zeroValid, firstValid, secondValid;

    float zero = ui->textEdit0->toPlainText().toFloat(&zeroValid);
    float first = ui->textEdit1->toPlainText().toUInt(&firstValid);
    float second = ui->textEdit2->toPlainText().toFloat(&secondValid);


    if (!zeroValid || !firstValid || !secondValid)
    {
        QMessageBox::critical(this, "Błąd krytyczny", "Podane wartości muszą być liczbami.");
        return;
    }
    else
    {

        parameters->zero = ui->textEdit0->toPlainText().toFloat();
        parameters->first = ui->textEdit1->toPlainText().toUInt();
        parameters->second = ui->textEdit2->toPlainText().toFloat();
    }
}
