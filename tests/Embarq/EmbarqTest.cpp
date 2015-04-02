#include "CppUTest/TestHarness.h"
#include <iostream>

#include "../mock/Test.h"

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

TEST(Embarq, Test2) {

    std::cout << Test::micros();
}

