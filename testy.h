#ifndef TESTY_H
#define TESTY_H

#include <QObject>

enum class Test_result { INTERUPTED, OK, FAIL };

class TEST
{
protected:
    static constexpr size_t LICZ_ITER = 30;

    static bool porownanieSekwencji(QVector<double> &spodz, QVector<double> &fakt)
    {
        constexpr double TOL = 1e-3;
        bool result = fakt.size() == spodz.size();
        for (int i = 0; result && i < fakt.size(); i++)
            result = fabs(fakt[i] - spodz[i]) < TOL;
        return result;
    }

public:
};

class TestyARX : protected TEST
{
    static Test_result test_0();
    static Test_result test_skok1();
    static Test_result test_skok2();
    static Test_result test_skok3();

public:
    static QVector<Test_result> all_tests();
};

class TestyPID : protected TEST
{
    static Test_result testP_0();
    static Test_result testP_skok();
    static Test_result testPI_skok1();
    static Test_result testPI_skok2();
    static Test_result testPID_skok();

public:
    static QVector<Test_result> all_tests();
};

class TestyUAR : protected TEST
{
    static Test_result test_0();
    static Test_result test_skok1();
    static Test_result test_skok2();
    static Test_result test_skok3();

public:
    static QVector<Test_result> all_tests();
};

#endif // TESTY_H
