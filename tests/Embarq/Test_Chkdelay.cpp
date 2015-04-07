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

TEST(Embarq, Test_Chkdelay_True) {
    CHECK_EQUAL(0, chkdelay(100, 1));
}

TEST(Embarq, Test_Chkdelay_False) {
    CHECK_EQUAL(1, chkdelay(100, 0));
}

