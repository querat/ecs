//
// Created by pasta on 17/02/18.
//

#include "Component.h"


uint64_t ecs::Component::idCounter = 0;

ecs::Component::Component() {
    this->mId = Component::idCounter++;
}

ecs::Component::~Component() {}
