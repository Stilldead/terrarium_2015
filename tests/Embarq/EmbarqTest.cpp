#include "CppUTest/TestHarness.h"


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
