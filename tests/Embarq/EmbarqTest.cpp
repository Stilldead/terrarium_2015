#include "CppUTest/TestHarness.h"
#include "XBee.h"

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

TEST(Embarq, Test_receive1)
{
  std::string entete = "37";
  std::string expediteur = "11.111.111.11";
  std::string destinataire = "22.222.222.22";
  std::string message = "coucou";
  std::string queue = "fin";
  std::string tab[] = {entete, expediteur, destinataire, message, queue};
  CHECK_EQUAL(tab, Xbee::receive());
}

TEST(Embarq, Test_send1)
{
  std::string entete = "64";
  std::string expediteur = "11.111.111.11";
  std::string destinataire = "22.222.222.22";
  std::string message = "salut";
  std::string queue = "fin";
  std::string datagramme[4] = {expediteur, destinataire, message, queue};
 
  CHECK_EQUAL(true, Xbee::send(datagramme));
}

TEST(Embarq, Test_send2)
{
  std::string entete = "64";
  std::string expediteur = "11.111.111.11";
  std::string destinataire = "22.222.222.22";
  std::string message = "salut";
  std::string queue = "fin";
  std::string datagramme[4] = {expediteur, destinataire, message, queue};
 
  CHECK_EQUAL(false, Xbee::send(datagramme));
}