//
// Created by Fabian on 6/14/26.
//

#ifndef OOP_PR3_ARENA_HERO_H
#define OOP_PR3_ARENA_HERO_H
#include "Creature.h"

class Hero : public Creature {
public:
    //Constructor and Deconstructor
    Hero(const std::string &name);
    ~Hero() override = default;

    //Functions
    int getDamage() override;
private:
};

#endif //OOP_PR3_ARENA_HERO_H
