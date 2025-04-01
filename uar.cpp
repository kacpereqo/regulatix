#include "uar.h"
#include "qfiledevice.h"

QUAR::QUAR(QObject *parent)
    : QObject{parent}
{}

QUAR::QUAR(QARX *arx, QPID *pid)
{
    m_ARX = arx;
    m_PID = pid;
}

double QUAR::Simulate(double wi)
{
    Ui = m_PID->symulacja(wi, yi);
    yi = m_ARX->Simulate(Ui + ((m_static) ? preStatic : 0)) + ((m_static) ? suStatic : 0);
    return yi;
}

QByteArray QUAR::serialize()
{
    QByteArray ser;
    QDataStream stream(&ser, QIODevice::WriteOnly);

    stream << Ui << yi << m_static << preStatic << suStatic << m_ARX->serialize_all(true)
           << m_PID->serialize();

    return ser;
}

void QUAR::deserialize(QByteArray &data)
{
    QDataStream stream(data);
    QByteArray ARX, PID;
    stream >> Ui >> yi >> m_static >> preStatic >> suStatic >> ARX >> PID;
    m_ARX->deserialize_all(ARX, true);
    m_PID->deserialize(PID);
}
