
#include <QtTest/QtTest>

#include "testcalculus.h"
#include "testvector.h"
#include "testspline.h"
#include "testlinalg.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    TestCalculus calculusTests;
    TestVector vectorTests;
    TestSpline splineTests;
    TestLinAlg algebraTests;

    return QTest::qExec(&calculusTests, argc, argv) | QTest::qExec(&vectorTests, argc, argv) | QTest::qExec(&splineTests, argc, argv) | QTest::qExec(&algebraTests, argc, argv);
}
