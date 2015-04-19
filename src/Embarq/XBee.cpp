#include "XBee.h"
#include "mock.h"

static std::string* receive() // reçois le tableau depuis le XBee
{
	return mock::byteReceived();
}

static bool send(std::string* tab) // envoi le tableau de string au Xbee renvoi un boolean pour indiquer si l'envoi a réussi ou pas 
{
	if(sizeof(tab) +1 > 100) // +2 pour l'ajout de la taille du paquet au début
		return false; //le XBee ne peut envoyer que paquet de 100 octets maximum
	uint8_t taille = sizeof(tab)+2;
	std::string tabEnvoye[5]= {std::to_string(taille), tab[0], tab[1], tab[2], tab[3]};
	return mock::byteSent(tabEnvoye);

}