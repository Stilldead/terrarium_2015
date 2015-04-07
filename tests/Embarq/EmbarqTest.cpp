#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

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


TEST_GROUP(MockDocumentation)
{
    void teardown()
    {
        mock().clear();
    }
};

void readPin()
{
    mock().actualCall("readPin");
}

TEST(MockDocumentation, SimpleScenario)
{
    mock().expectOneCall("readPin");
    readPin();
    mock().checkExpectations();
}
