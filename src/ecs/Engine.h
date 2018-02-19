//
// Created by pasta on 19/02/18.
//

#ifndef ALLEGRO_ENGINE_H
#define ALLEGRO_ENGINE_H


class Engine {

private:
    float   mFrameRate = 60;
    float   mMilliSecondsPerFrame = 1000.f / mFrameRate;

public:
    Engine() = default;
    ~Engine() = default;

    void mainLoop();
    void update(float deltaTime);

private:
    void syncWithFrameRate(long deltaTimeMs) const;
};


#endif //ALLEGRO_ENGINE_H
