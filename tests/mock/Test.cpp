#include "Test.h"
#include <chrono>
#include <unistd.h>


double Test::micros() {
    auto start = std::chrono::high_resolution_clock::now();
    usleep(2000);
    auto elapsed = std::chrono::high_resolution_clock::now() - start;

    long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
    return microseconds;
}