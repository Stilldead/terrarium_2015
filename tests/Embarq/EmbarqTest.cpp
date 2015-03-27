#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
//#include "CppUTestExt/MockExpectedCall.h"


#include "../mock/micros.h"

extern "C" {
  #include "DHT_11.h"
}

TEST_GROUP(Embarq) {
    void setup() {
    }

    void teardown() {
        mock().clear();
    }
};

TEST(Embarq, Test)
{
	FAIL("Fail me");
}

TEST(Embarq, Test2) {
    mock().expectOneCall("micros").andReturnValue(10);
    micros();
    mock().checkExpectations();
}

