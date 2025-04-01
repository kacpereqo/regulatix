#ifndef UAR_H
#define UAR_H

#include <QDebug>
#include <QObject>
#include "qarx.h"
#include "qpid.h"

class QUAR : public QObject
{
    Q_OBJECT

    QARX *m_ARX;
    QPID *m_PID;
    double Ui = 0;
    double yi = 0;

    bool m_static = false;

    double preStatic = 0.0;
    double suStatic = 0.0;

public:
    explicit QUAR(QObject *parent = nullptr);

    QUAR(QARX *arx, QPID *pid);
    double Simulate(double input);
    double getUi() { return Ui; }
    void reset()
    {
        QPID_resetPID();
        QARX_reset();
        Ui = 0;
        yi = 0;
    }
    void set_static(bool on_off, double pre, double su)
    {
        m_static = on_off;
        preStatic = pre;
        suStatic = su;
    }
    double get_preStatic() { return preStatic; }
    double get_suStatic() { return suStatic; }
    QByteArray serialize();
    void deserialize(QByteArray &data);

    double QPID_get_kp() { return m_PID->get_kp(); }
    double QPID_get_ki() { return m_PID->get_ki(); }
    double QPID_get_kd() { return m_PID->get_kd(); }
    double QPID_get_P() { return m_PID->get_P(); }
    double QPID_get_I() { return m_PID->get_I(); }
    double QPID_get_D() { return m_PID->get_D(); }
    double QPID_get_Uch() { return m_PID->get_Uch(); }
    void QPID_setP(double p) { m_PID->set_P(p); }
    void QPID_setI(double i) { m_PID->set_I(i); }
    void QPID_setD(double d) { m_PID->set_D(d); }
    void QPID_setLimit(bool on_off, double mi = 0, double ma = 0) { m_PID->setLimit(on_off, mi, ma); }
    double QPID_get_max_lim() { return m_PID->get_max_lim(); }
    double QPID_get_min_lim() { return m_PID->get_min_lim(); }
    void QPID_resetD() { m_PID->resetD(); }
    void QPID_resetI() { m_PID->resetI(); }
    void QPID_resetPID() { m_PID->resetPID(); }
    void QPID_set_anty_windup(bool on_off) { m_PID->set_anty_windup(on_off); }
    void QPID_set_sposob_licz_calki(bool sposob) {m_PID->set_sp_licz_uch(sposob); }
    void QPID_deserialize(QByteArray &data) { m_PID->deserialize(data); }
    QByteArray QPID_serialize() { return m_PID->serialize(); }

    void QARX_set_noise(double noise) { m_ARX->set_noise(noise); }
    void QARX_set_delay(size_t delay) { m_ARX->set_delay(delay); }
    void QARX_set_A(double value, size_t index, size_t size) { m_ARX->set_A(value, index, size); }
    void QARX_set_B(double value, size_t index, size_t size) { m_ARX->set_B(value, index, size); }
    double QARX_get_A(size_t index) { return m_ARX->get_A(index - 1); }
    double QARX_get_B(size_t index) { return m_ARX->get_B(index - 1); }
    size_t QARX_get_sizeA() { return m_ARX->get_sizeA(); }
    size_t QARX_get_sizeB() { return m_ARX->get_sizeB(); }
    void QARX_reset() { m_ARX->reset(); }
    QByteArray QARX_serialize_all(bool all = true) { return m_ARX->serialize_all(all); }
    void QARX_deserialize_all(QByteArray &data, bool all = true)
    {
        m_ARX->deserialize_all(data, all);
    }
    size_t QARX_get_delay() { return m_ARX->get_delay(); }
    double QARX_get_noise() { return m_ARX->get_noise(); }
};

#endif // UAR_H
