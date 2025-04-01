#include "qpid.h"
#include <QDebug>
#include "qfiledevice.h"

QPID::QPID(QObject *parent)
    : QObject{parent}
{}

double QPID::symulacja(double zadane, double zmierzone)
{
    uchyb = zadane - zmierzone;

    P = kp * uchyb;
    ileUch = (anty_windup) ? 0 : (ileUch + uchyb);
    ileUch_podC = (ki == 0) ? 0 : ((anty_windup) ? 0 : (ileUch_podC + (uchyb / ki)));
    I = (!suma_pod_calka) ? (((ki == 0.0) ? 0 : (ileUch / ki))) : ileUch_podC;

    D = (uchyb - poprzUch) * kd;

    double wartosc = P + I + D;
    if (limity == true) {
        if (wartosc > max)
        {
            wartosc = max;
            ileUch -= uchyb;    
        }
        else if (wartosc < min)
        {
            wartosc = min;
            ileUch -= uchyb;
        }
    }
    poprzUch = uchyb;
    return wartosc;
}

void QPID::resetPID()
{
    kp = 0.0; ki = 0.0; kd = 0.0;
    P = 0.0; I = 0.0; D = 0.0;
    uchyb = 0.0; poprzUch = 0.0;
    ileUch = 0.0; ileUch_podC = 0.0;
    min = 0.0; max = 0.0;
    limity = false;
}

QByteArray QPID::serialize()
{
    QByteArray ser;
    QDataStream stream(&ser, QIODevice::WriteOnly);

    stream << kp << ki << kd << P << I << D << uchyb << poprzUch << ileUch << ileUch_podC << min << max << limity
           << anty_windup;

    return ser;
}

void QPID::deserialize(QByteArray &data)
{
    QDataStream stream(data);

    stream >> kp >> ki >> kd >> P >> I >> D >> uchyb >> poprzUch >> ileUch >> ileUch_podC >> min >> max >> limity
        >> anty_windup;
}
