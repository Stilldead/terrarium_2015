#include <stdint.h>

class mock {
    private:
        uint8_t digitalWorking;

    public:
        mock();
        uint8_t getDigitalWorking();
        static double myMock_micros();
        static uint8_t myMock_DigitalRead_working(uint8_t sensorPin, int checkError);
        static std::string* byteReceived();
        static bool byteSent(std::string* datagram);
        ~mock();
    
};