#include "CppUTestExt/MockSupport.h"
#include "micros.h"
#include <ctime>


static int micros::micros() {
    return mock().actualCall("micros").returnIntValue();
    /*double t = time(0);
    return mock().doubleReturnValue(t);*/
}