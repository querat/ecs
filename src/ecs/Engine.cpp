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

void Engine::mainLoop() {
    bool    stopping = false;
    Timer   timer;
    float   deltaTime = 0.f;

    while (not stopping) {
        deltaTime = timer.calcDeltaTimeInMs();

        std::this_thread::sleep_for(std::chrono::milliseconds(42));

        std::cout << "delta: " << deltaTime << std::endl;
    }
}
