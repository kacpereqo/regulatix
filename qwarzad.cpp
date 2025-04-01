#include "qwarzad.h"
#include "qfiledevice.h"

QwarZadana::QwarZadana(QObject *parent)
    : QObject{parent}
{}

void QwarZadana::set_J(double Aj)
{
    this->Aj = Aj;
}

void QwarZadana::set_S(double As, size_t Ts)
{
    this->As = As;
    this->Ts = Ts;
}

void QwarZadana::set_P(double Ap, size_t Tp, double Pp)
{
    this->Ap = Ap;
    this->Tp = Tp;
    this->Pp = Pp;
}

double QwarZadana::simulate_value(size_t i)
{
    double value = Aj;

    if (0 < Ts)
        value += As * qSin((i % Ts) * 2.0 * M_PI / Ts);

    else if (0 < Tp && 0 < Pp && (i % Tp < Pp * Tp))
        value += Ap;

    return value;
}

void QwarZadana::reset()
{
    this->Aj = 0;
    this->As = 0;
    this->Ap = 0;
    this->Ts = 0;
    this->Tp = 0;
    this->Pp = 0;
}

QByteArray QwarZadana::serialize()
{
    QByteArray ser;
    QDataStream stream(&ser, QIODevice::WriteOnly);

    stream << Aj << As << Ap << Ts << Tp << Pp;

    return ser;
}

void QwarZadana::deserialize(QByteArray &data)
{
    QDataStream stream(data);
    stream >> Aj >> As >> Ap >> Ts >> Tp >> Pp;
}
