#include "CppUTest/TestHarness.h"

extern "C"
{
  #include "DHT_11.h"
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

TEST(Embarq, Test)
{
  FAIL("Fail me");
}
