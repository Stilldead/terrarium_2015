#include <stdint.h>
class mock
{
public:
    mock();
    static double myMock_micros();
    static uint8_t myMock_DigitalRead(uint8_t pin);
    ~mock();
    
};