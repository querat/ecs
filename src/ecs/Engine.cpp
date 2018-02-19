//
// Created by pasta on 19/02/18.
//

#include <iostream>
#include <zconf.h>
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
        deltaTime = timer.calcTimeElapsedSinceLastCall();

        usleep(42000);
        std::cout << "delta: " << deltaTime << std::endl;
    }
}
