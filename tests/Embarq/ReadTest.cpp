#include "CppUTest/TestHarness.h"

extern "C"
{
    #include "DHT_11.h"
}

TEST_GROUP(Embarq)
{
    void setup()
    { }

    void teardown() 
    { }
};

TEST(Embarq, READ_AA)
{
    CHECK_EQUAL(170, read("01010101"));
}
