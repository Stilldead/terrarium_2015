#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "mock.h"
#include <iostream>

TEST_GROUP(Embarq)
{
    void teardown()
    {
        mock().clear();
    }
};

TEST(MockDocumentation, SimpleScenario)
{
    mock().expectOneCall("byteReceived");

    mock().checkExpectations();
}

static string* byteReceived()
{
    mock().actualCall("byteReceived");
    std::string entete = "32";
    std::string expediteur = "11.111.111.11";
    std::string destinataire = "22.222.222.22";
    std::string message = "coucou";
    std::string queue = "fin";
    std::string tab[] = {entete, expediteur, destinataire, message, queue};

	return tab;
}

TEST(MockDocumentation, SimpleScenario)
{
    mock().expectOneCall("byteSent");

    mock().checkExpectations();
}

static bool byteSent(std::string* datagram)
{
    mock().actualCall("byteSent");
	return true;
}
