//
// Created by pasta on 17/02/18.
//

#ifndef ENTITY_H
#define ENTITY_H


#include <cstdint>

namespace ecs {

    class Entity {
    private:
        static uint64_t mStaticId;

        uint64_t mId;

    public:
        Entity();

        virtual ~Entity() = default;

        uint64_t getId() const;


    };
}


#endif //ENTITY_H
