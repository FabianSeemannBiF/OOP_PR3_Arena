//
// Created by Fabian on 6/14/26.
//
#include "../includes/Zombie.h"

Zombie::Zombie() : Creature("Zombie", 1) {
}

int Zombie::getDamage() {
    return 1;
}

void Zombie::dealDamage(const int damage) {
    if (damage == 3) {
        this->health = 0;
    }
}
