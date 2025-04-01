#include "testy.h"
#include "qarx.h"
#include "qpid.h"
#include "uar.h"

// testy ARX

QVector<Test_result> TestyARX::all_tests()
{
    QVector<Test_result> test_res;
    test_res.reserve(4);
    test_res.push_back(test_0());
    test_res.push_back(test_skok1());
    test_res.push_back(test_skok2());
    test_res.push_back(test_skok3());
    return test_res;
}

Test_result TestyARX::test_0()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QARX instancjaTestowa({-0.4}, {0.6}, 1, 0);
        instancjaTestowa.set_noise(0);
        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.Simulate(0);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyARX::test_skok1()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QARX instancjaTestowa({-0.4}, {0.6}, 1, 0);
        instancjaTestowa.set_noise(0);

        spodzSygWy = {0,        0,        0.6,      0.84,     0.936,    0.9744,
                      0.98976,  0.995904, 0.998362, 0.999345, 0.999738, 0.999895,
                      0.999958, 0.999983, 0.999993, 0.999997, 0.999999, 1,
                      1,        1,        1,        1,        1,        1,
                      1,        1,        1,        1,        1,        1};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.Simulate(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyARX::test_skok2()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QARX instancjaTestowa({-0.4}, {0.6}, 2, 0);
        instancjaTestowa.set_noise(0);
        spodzSygWy = {0,        0,        0,        0.6,      0.84,     0.936,
                      0.9744,   0.98976,  0.995904, 0.998362, 0.999345, 0.999738,
                      0.999895, 0.999958, 0.999983, 0.999993, 0.999997, 0.999999,
                      1,        1,        1,        1,        1,        1,
                      1,        1,        1,        1,        1,        1};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.Simulate(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyARX::test_skok3()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QARX instancjaTestowa({-0.4, 0.2}, {0.6, 0.3}, 2, 0);
        instancjaTestowa.set_noise(0);
        spodzSygWy = {0,       0,       0,       0.6,     1.14,    1.236,   1.1664,  1.11936,
                      1.11446, 1.12191, 1.12587, 1.12597, 1.12521, 1.12489, 1.12491, 1.12499,
                      1.12501, 1.12501, 1.125,   1.125,   1.125,   1.125,   1.125,   1.125,
                      1.125,   1.125,   1.125,   1.125,   1.125,   1.125};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.Simulate(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

// testy PID

QVector<Test_result> TestyPID::all_tests()
{
    QVector<Test_result> test_res;
    test_res.push_back(testP_0());
    test_res.push_back(testP_skok());
    test_res.push_back(testPI_skok1());
    test_res.push_back(testPI_skok2());
    test_res.push_back(testPID_skok());
    return test_res;
}

Test_result TestyPID::testP_0()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QPID instancjaTestowa(0.5);

        for (int i = 0; i < LICZ_ITER; i++) {
            spodzSygWy[i] = 0;
            faktSygWy[i] = instancjaTestowa.symulacja(0);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyPID::testP_skok()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QPID instancjaTestowa(0.5);
        spodzSygWy = {0.0, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5,
                      0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.symulacja(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyPID::testPI_skok1()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QPID instancjaTestowa(0.5, 1.0);
        spodzSygWy = {0,    1.5,  2.5,  3.5,  4.5,  5.5,  6.5,  7.5,  8.5,  9.5,
                      10.5, 11.5, 12.5, 13.5, 14.5, 15.5, 16.5, 17.5, 18.5, 19.5,
                      20.5, 21.5, 22.5, 23.5, 24.5, 25.5, 26.5, 27.5, 28.5, 29.5};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.symulacja(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyPID::testPI_skok2()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QPID instancjaTestowa(0.5, 10.0);
        spodzSygWy = {0, 0.6, 0.7, 0.8, 0.9, 1,   1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9,
                      2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3,   3.1, 3.2, 3.3, 3.4};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.symulacja(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyPID::testPID_skok()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QPID instancjaTestowa(0.5, 10.0, 0.2);
        spodzSygWy = {0, 0.8, 0.7, 0.8, 0.9, 1,   1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9,
                      2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3,   3.1, 3.2, 3.3, 3.4};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.symulacja(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

// testy UAR

QVector<Test_result> TestyUAR::all_tests()
{
    QVector<Test_result> test_res;
    test_res.reserve(4);
    test_res.push_back(test_0());
    test_res.push_back(test_skok1());
    test_res.push_back(test_skok2());
    test_res.push_back(test_skok3());
    return test_res;
}

Test_result TestyUAR::test_0()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QPID testPID(0.5, 5.0, 0.2);
        QARX testARX({-0.4}, {0.6});
        QUAR instancjaTestowa(&testARX, &testPID);
        instancjaTestowa.QARX_set_noise(0);

        for (int i = 0; i < LICZ_ITER; i++) {
            spodzSygWy[i] = 0;
            faktSygWy[i] = instancjaTestowa.Simulate(0);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyUAR::test_skok1()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QPID testPID(0.5, 5.0, 0.2);
        QARX testARX({-0.4}, {0.6});
        QUAR instancjaTestowa(&testARX, &testPID);
        instancjaTestowa.QARX_set_noise(0);

        spodzSygWy = {0.0,      0.0,      0.54,     0.756,    0.6708,   0.64008,
                      0.729,    0.810437, 0.834499, 0.843338, 0.8664,   0.8936,
                      0.911886, 0.923312, 0.93404,  0.944929, 0.954065, 0.961042,
                      0.966815, 0.971965, 0.97642,  0.980096, 0.983143, 0.985741,
                      0.987964, 0.989839, 0.991411, 0.992739, 0.993865, 0.994818};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.Simulate(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyUAR::test_skok2()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QPID testPID(0.5, 5.0, 0.2);
        QARX testARX({-0.4}, {0.6}, 2);
        QUAR instancjaTestowa(&testARX, &testPID);
        instancjaTestowa.QARX_set_noise(0);

        spodzSygWy = {0.0,      0.0,      0.0,      0.54,     0.756,    0.9624,
                      0.87336,  0.841104, 0.771946, 0.821644, 0.863453, 0.93272,
                      0.952656, 0.965421, 0.954525, 0.955787, 0.957472, 0.969711,
                      0.978075, 0.985968, 0.987821, 0.989149, 0.989053, 0.990645,
                      0.992248, 0.994403, 0.995707, 0.996677, 0.997024, 0.997388};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.Simulate(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}

Test_result TestyUAR::test_skok3()
{
    try {
        QVector<double> spodzSygWy(LICZ_ITER);
        QVector<double> faktSygWy(LICZ_ITER);

        QPID testPID(1.0, 2.0, 0.2);
        QARX testARX({-0.4}, {0.6}, 1);
        QUAR instancjaTestowa(&testARX, &testPID);
        instancjaTestowa.QARX_set_noise(0);

        spodzSygWy = {0.0,      0.0,      1.02,     1.608,    1.1028,   0.41736,
                      0.546648, 1.20605,  1.43047,  0.999176, 0.615056, 0.799121,
                      1.21304,  1.26025,  0.939289, 0.748507, 0.927166, 1.17292,
                      1.14155,  0.921616, 0.843258, 0.990018, 1.12577,  1.068,
                      0.927024, 0.908125, 1.01702,  1.08484,  1.02618,  0.941508};

        for (int i = 0; i < LICZ_ITER; i++) {
            faktSygWy[i] = instancjaTestowa.Simulate(!!i);
        }
        if (porownanieSekwencji(spodzSygWy, faktSygWy)) {
            return Test_result::OK;
        } else {
            return Test_result::FAIL;
        }
    } catch (...) {
        return Test_result::INTERUPTED;
    }
}
