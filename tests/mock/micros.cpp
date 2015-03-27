#include "CppUTestExt/MockSupport.h"
#include <ctime>

double micros() {
    return mock().actualCall("micros").returnIntValue();
    /*double t = time(0);
    return mock().doubleReturnValue(t);*/
}