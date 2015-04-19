#include <stdint.h>
#include <iostream>

#ifndef __XBEE__H
#define __XBEE__H

class Xbee {
    public:

		static std::string* receive(); // reçois le tableau depuis le XBee
		static bool send(std::string* tab); // envoi le tableau de string au Xbee renvoi un boolean pour indiquer si l'envoi a réussi ou pas 


	};

#endif