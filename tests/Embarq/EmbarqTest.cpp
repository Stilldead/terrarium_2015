#include "CppUTest/TestHarness.h"

extern "C" {
    #include "DHT_11.h"
}

TEST_GROUP(Embarq) {
    void setup() {
    }

    void teardown() {
    }
};

TEST(Embarq, Test) {
    FAIL("Fail me");
}

TEST(Embarq, Test_Chkdelay_True) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(0, Sensor->chkdelay(100, 1));
}

TEST(Embarq, Test_Chkdelay_False) {
    DHT_11* Sensor = new DHT_11();
    CHECK_EQUAL(1, Sensor->chkdelay(100, 0));
}