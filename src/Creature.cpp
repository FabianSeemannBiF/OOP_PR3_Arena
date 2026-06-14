//
// Created by Fabian on 6/14/26.
//
#include "../includes/Creature.h"

std::string Creature::getName() const {
    return this->name;
}

bool Creature::isAlive() const {
    if (this->health <= 0) {
        return false;
    }
    return true;
}

void Creature::dealDamage(const int damage) {
    if (damage > 0) {
        this->health -= damage;
    }
}

int Creature::getHealth() const {
    return this->health;
}

int Creature::getMaxHealth() const {
    return this->maxHealth;
}
