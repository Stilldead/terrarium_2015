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

TEST(Embarq, Test_returnTab)
{
  string entete = "32";
  string expediteur = "11.111.111.11";
  string destinataire = "22.222.222.22";
  string message = "coucou";
  string queue = "fin";
  string tab[] = {entete, expediteur, destinataire, message, queue};
  bytes datagramme[5] = {entete.getBytes(), expediteur.getBytes(), destinataire.getBytes(), message.getBytes(), queue.getBytes()};
 
  CHECK_EQUALS(tab, receiveData(datagramme));
}

TEST(Embarq, Test_returnTab)
{
  string entete = "64";
  string expediteur = "11.111.111.11";
  string destinataire = "22.222.222.22";
  string message = "salut";
  string queue = "fin";
  string tab[] = {entete, expediteur, destinataire, message, queue};
  bytes datagramme[5] = {entete.getBytes(), expediteur.getBytes(), destinataire.getBytes(), message.getBytes(), queue.getBytes()};
 
  CHECK_EQUALS(tab, receiveData(datagramme));
}