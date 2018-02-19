//
// Created by pasta on 19/02/18.
//

#ifndef ALLEGRO_TIMER_H
#define ALLEGRO_TIMER_H

#include <chrono>

class Timer {

    using tClock        = std::chrono::high_resolution_clock;
    using tMillisecond  = std::chrono::duration<float, std::ratio<1>>

private:

    auto mLastTimeSample = ;

public:
    Timer() = default;
    ~Timer() = default;

    float   calcTimeElapsedSinceLastCall();

};


#endif //ALLEGRO_TIMER_H
