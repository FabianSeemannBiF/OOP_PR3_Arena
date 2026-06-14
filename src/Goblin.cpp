//
// Created by Fabian on 6/14/26.
//
#include "../includes/Goblin.h"

Goblin::Goblin() : Creature("Goblin", 3) {
}

int Goblin::getDamage() {
    return 2;
}
