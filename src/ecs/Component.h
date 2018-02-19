//
// Created by pasta on 17/02/18.
//

#ifndef ALLEGRO_COMPONENT_H
#define ALLEGRO_COMPONENT_H


#include <cstdint>

namespace ecs {
    class Component {
    private:
        static uint64_t idCounter;
        uint64_t mId;

    public:
        Component();
        virtual ~Component();

    };
}

#endif //ALLEGRO_COMPONENT_H
