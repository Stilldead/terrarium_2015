#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

TEST_GROUP(Embarq)
{
    void teardown()
    {
        mock().clear();
    }
};

void productionCode()
{
    mock().actualCall("productionCode");
}

TEST(MockDocumentation, SimpleScenario)
{
    mock().expectOneCall("byteReceived");

    mock().checkExpectations();
}

string* byteReceived(bytes* tab)
{
	return tab;
}

TEST(MockDocumentation, SimpleScenario)
{
    mock().expectOneCall("byteSent");

    mock().checkExpectations();
}

bool byteSent(bytes* datagram)
{
	return true;
}
