#ifndef QWARZAD_H
#define QWARZAD_H

#include <QDebug>
#include <QObject>
#include <QtMath>

class QwarZadana : public QObject
{
    Q_OBJECT

private:
    double Aj = 0, As = 0, Ap = 0;
    size_t Ts = 0, Tp = 0;
    double Pp = 0;

public:
    explicit QwarZadana(QObject *parent = nullptr);
    QByteArray serialize();
    void deserialize(QByteArray &data);

    void set_J(double A);
    void set_S(double A, size_t T);
    void set_P(double A, size_t T, double P);
    void reset();

    double get_Aj() { return Aj; }
    double get_As() { return As; }
    double get_Ap() { return Ap; }
    size_t get_Ts() { return Ts / 3; }
    size_t get_Tp() { return Tp / 3; }
    double get_Pp() { return Pp; }

    double simulate_value(size_t T);
signals:
};

#endif // QWARZAD_H
