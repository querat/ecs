//
// Created by pasta on 19/02/18.
//

#include <iostream>
#include <zconf.h>
#include <thread>
#include "Engine.h"
#include "Timer.h"

void Engine::update(float deltaTime) {
    (void)deltaTime;
}

void Engine::syncWithFrameRate(long deltaTimeMs) const {
    float dfFloat = static_cast<float>(deltaTimeMs);

    int timeRemainingForCurFrame = static_cast<int>(mMilliSecondsPerFrame - dfFloat);
    if (timeRemainingForCurFrame > 0) {
        std::this_thread::sleep_for(std::chrono::milliseconds(timeRemainingForCurFrame));
        std::cout << "slept for " << timeRemainingForCurFrame << " milliseconds" << std::endl;
    }
}

void Engine::mainLoop() {
    bool    stopping = false;
    Timer   timer;
    long    deltaTime = 0;

    while (not stopping) {


        deltaTime = timer.calcDeltaTimeInMs();
        syncWithFrameRate(deltaTime);


    }
}
