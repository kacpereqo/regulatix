#ifndef GENERATOR_H
#define GENERATOR_H

#include <QDialog>

namespace Ui {
class Generator;
}

enum class GeneratorType
{
    Single, Rectangle, Sinus
};

struct Parameters
{
    Parameters(float zero, unsigned first, float second) :
        zero(zero), first(first), second(second){}

    float zero;
    unsigned first;
    float second;
    GeneratorType type = GeneratorType::Single;
};

class Generator : public QDialog
{
    Q_OBJECT

public:
    explicit Generator(Parameters *parameters, QWidget *parent = nullptr);
    ~Generator();

private:
    Ui::Generator *ui;

    void ok();

    Parameters *parameters;

};

#endif // GENERATOR_H
