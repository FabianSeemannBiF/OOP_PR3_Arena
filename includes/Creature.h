//
// Created by Fabian on 6/14/26.
//

#ifndef OOP_PR3_ARENA_CREATURE_H
#define OOP_PR3_ARENA_CREATURE_H
#include <string>

class Creature {
public:
    //Constructor and Deconstructor
    virtual ~Creature() = default;

    //Functions
    std::string getName() const;
    bool isAlive() const;
    virtual int getDamage() = 0;
    virtual void dealDamage(int damage);

    //Getters
    int getHealth() const;
    int getMaxHealth() const;
protected:
    Creature(const std::string& name, const int health) : name(name), health(health), maxHealth(0) {};
    std::string name;
    int health, maxHealth;
};

#endif //OOP_PR3_ARENA_CREATURE_H
