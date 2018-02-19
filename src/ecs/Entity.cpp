//
// Created by pasta on 17/02/18.
//

#include "Entity.h"

uint64_t ecs::Entity::mStaticId = 0;

ecs::Entity::Entity()  {
    this->mId = Entity::mStaticId++;
}

uint64_t
ecs::Entity::getId() const {
    return mId;
}