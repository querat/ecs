//
// Created by pasta on 19/02/18.
//

#ifndef ALLEGRO_ENGINE_H
#define ALLEGRO_ENGINE_H


class Engine {

public:
    Engine() = default;
    ~Engine() = default;

    void mainLoop();
    void update(float deltaTime);
};


#endif //ALLEGRO_ENGINE_H
