//
// Created by pasta on 17/02/18.
//

#ifndef ALLEGRO_SGRAVITY_H
#define ALLEGRO_SGRAVITY_H

#include "ecs/System.h"

class SMovement : ecs::System {

    SMovement()           = default;
    ~SMovement() override = default;


    void Update(const float deltaTime);
};


#endif //ALLEGRO_SGRAVITY_H
