#include "qarx.h"
#include "qdebug.h"
#include "qfiledevice.h"

QARX::QARX(QObject *parent)
    : QObject{parent}
{}

QARX::QARX(QVector<double> a, QVector<double> b, size_t delay, double act_state)
{
    m_a = a;
    m_b = b;
    set_delay(delay);
    m_y[m_delay] = act_state;
    rng.seed(srng());
    set_noise(noise_val);
}

double QARX::Simulate(double value)
{
    double current_value = 0;
    for (size_t i = 0; i < m_b.size(); i++) {
        current_value += m_b[i] * m_u[i];
    }
    for (size_t i = 0; i < m_a.size(); i++) {
        current_value -= m_a[i] * m_y[i];
    }
    if (0 < noise_val) current_value += m_noise(rng);
    m_y.push_front(current_value);
    m_y.pop_back();

    m_u.push_front(value);
    m_u.pop_back();
    return m_y.at(m_delay);
}

void QARX::set_noise(double noise)
{
    noise_val = noise;
    if (0 < noise_val) m_noise = decltype(m_noise){0, noise_val};
}

void QARX::set_delay(size_t delay)
{
    m_delay = delay - 1;
    resize_U();
    resize_Y();
}

void QARX::set_A(double value, size_t index, size_t size)
{
    if (m_a.size() != size) {
        m_a.resize(size, 0);
        resize_Y();
    }
    m_a[index] = value;
}

void QARX::set_B(double value, size_t index, size_t size)
{
    if (m_b.size() != size) {
        m_b.resize(size, 0);
        resize_U();
    }
    m_b[index] = value;
}

void QARX::resize_Y()
{
    double temp = 0;
    if(m_y.size() > m_delay) temp = m_u.at(m_delay);
    m_y.resize(m_a.size() + m_delay, temp);
}

void QARX::resize_U()
{
    double temp = 0;
    if(m_u.size() > m_delay) temp = m_u.at(m_delay);
    m_u.resize(m_b.size() + m_delay, temp);
}

void QARX::reset()
{
    noise_val = 0.01;
    m_a = {0};
    m_b = {0};
    m_delay = 0;
    m_y = {0}, m_u = {0};
    set_delay(1);
}

QByteArray QARX::serialize_all(bool all)
{
    QByteArray ser;
    QDataStream stream(&ser, QIODevice::WriteOnly);

    stream << noise_val << m_delay;
    QVector<QList<double> *> vectors;
    vectors = {&m_a, &m_b};

    for(auto &vec : vectors)
    {
        while((vec->at(vec->size()-1)==0) && (1 < vec->size()))
        {
            vec->pop_back();
        }
    }

    if (!all)
    {
        vectors = {&m_a, &m_b, &m_y, &m_u};
    }
    for (const auto &vec : vectors) {
        stream << (size_t) (vec->size());
        for (const auto &value : *vec) {
            stream << value;
        }
    }

    return ser;
}

void QARX::deserialize_all(QByteArray &data, bool all)
{
    reset();
    QVector<QList<double> *> vectors;
    if (all)
        vectors = {&m_a, &m_b, &m_y, &m_u};
    else
        vectors = {&m_a, &m_b};
    QDataStream stream(data);
    double noise;
    size_t del;
    stream >> noise >> del;
    this->set_noise(noise);
    this->set_delay(del + 1);

    for (auto &vec : vectors) {
        size_t size;
        stream >> size;
        vec->resize(size, 0);
        for (auto &val : *vec) {
            stream >> val;
        }
    }
    if (!all) {
        resize_U();
        resize_Y();
    }
}

bool QARX::operator==(QByteArray &sec)
{
    QByteArray org = this->serialize_all(true);
    return ((org == sec) ? true : false);
}
