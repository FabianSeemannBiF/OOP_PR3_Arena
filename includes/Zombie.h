//
// Created by Fabian on 6/14/26.
//

#ifndef OOP_PR3_ARENA_ZOMBIE_H
#define OOP_PR3_ARENA_ZOMBIE_H
#include "Creature.h"

class Zombie : public Creature {
public:
    //Constructor and Deconstructor
    Zombie();
    ~Zombie() override = default;

    //Functions
    int getDamage() override;
    void dealDamage(int damage) override;
private:
};

#endif //OOP_PR3_ARENA_ZOMBIE_H
