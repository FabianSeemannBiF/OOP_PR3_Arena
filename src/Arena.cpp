#include "Arena.h"
#include <iostream>

Arena::~Arena() {
    for (Creature *c: creatures) {
        delete c;
    }
    creatures.clear();
}

void Arena::addMonster(Creature *creature) {
    if (creature != nullptr) {
        creatures.push_back(creature);
    }
}

int Arena::getMonsterAmount() const {
    int alive_Count = 0;
    for (Creature *c: creatures) {
        if (c->isAlive()) {
            alive_Count++;
        }
    }
    return alive_Count;
}

void Arena::attackMonster(const int monsterNumber, Creature &attacker) {
    if (monsterNumber < 0 || monsterNumber >= creatures.size()) {
        throw std::invalid_argument("Monster number out of range");
    }

    Creature *attackedMonster = creatures[monsterNumber];

    if (!attackedMonster->isAlive()) {
        throw std::invalid_argument("Monster already dead");
    }

    const int attacker_damage = attacker.getDamage();
    attackedMonster->dealDamage(attacker_damage);
    std::cout << "Hero deals " << attacker_damage << " damage to " << attackedMonster->getName();

    if (attackedMonster->isAlive()) {
        const int monster_damage = attackedMonster->getDamage();
        attacker.dealDamage(monster_damage);
        std::cout << " and it defends itself with " << monster_damage << " damage." << std::endl;
    } else {
        std::cout << " and defeats it!" << std::endl;
        std::cout << "There are " << getMonsterAmount() << " Monsters remaining." << std::endl;
    }
}
