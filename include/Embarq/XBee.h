#include <stdint.h>

#ifndef __XBEE__H
#define __XBEE_H

class XBee {
    private:
        char pin;
        void readDPin();
        void readAPin(); 
        void writeDPin();
        void writeAPin();
        
    public:
};

#endif
