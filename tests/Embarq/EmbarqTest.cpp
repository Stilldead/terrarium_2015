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

TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, FirstTest)
{
   FAIL("Fail me!");
}
