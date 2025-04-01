#ifndef QARX_H
#define QARX_H

#include "qdebug.h"
#include <QList>
#include <QObject>
#include <random>

using namespace std;

class QARX : public QObject
{
    Q_OBJECT
protected:
    double noise_val = 0.01;
    random_device srng;
    mt19937 rng;

    QVector<double> m_a = {0}, m_b = {0};
    size_t m_delay = 0;
    QList<double> m_y = {0}, m_u = {0};
    normal_distribution<double> m_noise{0, noise_val};

    void resize_Y();
    void resize_U();

public:
    explicit QARX(QObject *parent = nullptr);
    QARX(QVector<double> a, QVector<double> b, size_t delay = 1, double act_state = 0);
    double Simulate(double value);

    void set_noise(double noise);
    void set_delay(size_t delay);
    void set_A(double value, size_t index, size_t size);
    void set_B(double value, size_t index, size_t size);

    double get_A(size_t index) { return m_a[index]; }
    double get_B(size_t index) { return m_b[index]; }

    size_t get_sizeA() { return m_a.size(); }
    size_t get_sizeB() { return m_b.size(); }

    double get_noise() { return noise_val; }
    size_t get_delay() { return m_delay + 1; }

    void reset();

    QByteArray serialize_all(bool all);
    void deserialize_all(QByteArray &data, bool all);

    bool operator==(QByteArray &sec);

signals:
};

#endif // QARX_H
