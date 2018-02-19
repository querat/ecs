//
// Created by pasta on 17/02/18.
//

#ifndef SYSTEM_H
#define SYSTEM_H

namespace ecs {

    class System {

    public:
        System()          = default;
        virtual ~System() = default;

        virtual void update(float delta) = 0;
    }; // !::System;
} // !::ecs

#endif //SYSTEM_H
