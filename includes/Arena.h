#ifndef ARENA_H
#define ARENA_H
#include <vector>

#include "Creature.h"


class Arena {
public:
    ~Arena();

    void attackMonster(int monsterNumber, Creature &attacker);
    int getMonsterAmount() const;
    void addMonster(Creature* creature);
protected:

private:
    std::vector <Creature*> creatures;
};

#endif // ARENA_H
