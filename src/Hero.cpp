//
// Created by Fabian on 6/14/26.
//
#include "../includes/Hero.h"

Hero::Hero(const std::string &name) : Creature(name, 20){
}

int Hero::getDamage() {
        return (rand() % 3) + 1;
}
