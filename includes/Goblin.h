//
// Created by Fabian on 6/14/26.
//

#ifndef OOP_PR3_ARENA_GOBLIN_H
#define OOP_PR3_ARENA_GOBLIN_H
#include "Creature.h"

class Goblin : public Creature {
public:
    //Constructor and Deconstructor
    Goblin();
    ~Goblin() override = default;

    //Functions
    int getDamage() override;
private:
};

#endif //OOP_PR3_ARENA_GOBLIN_H
