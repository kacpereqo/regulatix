#include "qwarzad.h"
#include "qfiledevice.h"

QwarZadana::QwarZadana(QObject *parent)
    : QObject{parent}
{}

void QwarZadana::set_J(double A)
{
    Aj = A;
}

void QwarZadana::set_S(double A, size_t T)
{
    As = A;
    Ts = T;
}

void QwarZadana::set_P(double A, size_t T, double P)
{
    Ap = A;
    Tp = T;
    Pp = P;
}

double QwarZadana::simulate_value(size_t i)
{
    double value = Aj;
    value += ((0 < Ts) ? (As * qSin((i % Ts) * 2.0 * M_PI / Ts)) : 0);
    if (0 < Tp && 0 < Pp)
        value += (((i % Tp < Pp * Tp)) ? Ap : 0);
    return value;
}

void QwarZadana::reset()
{
    Aj = 0, As = 0, Ap = 0;
    Ts = 0, Tp = 0;
    Pp = 0;
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
