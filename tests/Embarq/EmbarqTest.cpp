#include "CppUTest/TestHarness.h"

extern "C"
{
  #include "XBee.h"
}

TEST_GROUP(Embarq)
{
  void setup()
  {
  }

  void teardown() 
  {
  }
};


TEST(Embarq, FirstTest)
{
   FAIL("Fail me!");
}

TEST(Embarq, readAPin)
{
    CHECK_TRUE(readAPin(
}
