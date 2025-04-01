#ifndef QPID_H
#define QPID_H

#include <QObject>

class QPID : public QObject
{
    Q_OBJECT
private:
    double kp = 0.0, ki = 0.0, kd = 0.0;
    double P = 0.0, I = 0.0, D = 0.0;
    double uchyb = 0.0, poprzUch = 0.0;
    double ileUch = 0.0, ileUch_podC = 0.0;
    double min = 0.0, max = 0.0;
    bool limity = false, anty_windup = false, suma_pod_calka = false;

public:
    explicit QPID(QObject *parent = nullptr);
    QPID(double P_m = 0, double I_m = 0, double D_m = 0)
    {
        kp = P_m;
        ki = I_m;
        kd = D_m;
    }

    double get_P() { return P; }
    double get_I() { return I; }
    double get_D() { return D; }
    double get_kp() { return kp; }
    double get_ki() { return ki; }
    double get_kd() { return kd; }
    double get_Uch() { return uchyb; }
    void set_P(double p) { kp = p; }
    void set_I(double i) { ki = i; }
    void set_D(double d) { kd = d; }
    void set_sp_licz_uch(bool pod_C) {suma_pod_calka = pod_C;}

    void set_anty_windup(bool on_off) { anty_windup = on_off; }
    void setLimit(bool on_off, double mi, double ma)
    {
        limity = on_off;
        min = mi;
        max = ma;
    }
    double get_max_lim() { return max; }
    double get_min_lim() { return min; }

    void resetI() { ileUch = 0.0; ileUch_podC = 0.0;}
    void resetD()
    {
        uchyb = 0.0;
        poprzUch = 0.0;
    }
    void resetPID();

    double symulacja(double zadane = 0, double zmierzone = 0);

    QByteArray serialize();
    void deserialize(QByteArray &data);

signals:
};

#endif // QPID_H
