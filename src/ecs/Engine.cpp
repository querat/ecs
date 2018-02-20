//
// Created by pasta on 19/02/18.
//

#include <iostream>
#include <thread>
#include "Engine.h"
#include "Timer.h"

void Engine::update(float deltaTime) {
    (void)deltaTime;
}

void Engine::syncWithFrameRate(float timeElapsed) const {
    float timeRemainingForCurFrame = mMilliSecondsPerFrame - timeElapsed;
    if (timeRemainingForCurFrame > 0.f) {
        std::this_thread::sleep_for(std::chrono::milliseconds((int)timeRemainingForCurFrame));
        std::cout << "slept for " << (int)timeRemainingForCurFrame << " milliseconds" << std::endl;
    }
    else {
        std::cout << "frame took " << abs((int)timeRemainingForCurFrame) << " extra milliseconds to calculate" << std::endl;
    }
}

void Engine::mainLoop() {
    bool    stopping = false;
    float   deltaTime = 0.f;
    Timer   timer;

    // will disappear
    srand((unsigned int)time(nullptr));


    std::cout << "ms per frame: " << mMilliSecondsPerFrame << std::endl;
    while (not stopping) {

        // Engine's calculations
        int randomFakeProcessTime = rand() % 24;
        std::this_thread::sleep_for(std::chrono::milliseconds(randomFakeProcessTime));

        deltaTime = timer.calcDeltaTimeInMs();

        std::cout << "fake process time: " << randomFakeProcessTime << std::endl;
        std::cout << "deltaTime: " << deltaTime << std::endl;
        syncWithFrameRate(deltaTime);
        std::cout << std::endl;
    }
}
