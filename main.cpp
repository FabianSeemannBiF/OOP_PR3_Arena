#include <iostream>

#include "Arena.h"
#include "Creature.h"
#include "Goblin.h"
#include "Hero.h"
#include "Zombie.h"

using namespace std;

int main() {
    srand(time(nullptr));

    cout << "Hello MonsterSlayer!" << endl;

    //Create your objects
    Creature *creature;
    Hero hero("Gerald");
    Arena arena;

    const int create_Count = (rand() % 11) + 5;
    for (int i = 0; i < create_Count; i++) {
        if (rand() % 2 == 0) {
            arena.addMonster(new Goblin());
        } else {
            arena.addMonster(new Zombie());
        }
    }


    cout << hero.getName() << " enters an arena with " << arena.getMonsterAmount() << " monsters." << endl;

    while (hero.isAlive() && arena.getMonsterAmount() > 0) {
        try {
            arena.attackMonster(rand() % 15, hero);
        } catch (std::exception &e) {
            cout << e.what() << endl;
        }
    }

    if (hero.isAlive()) {
        cout << hero.getName() << " has defeated all the monsters!" << hero.getHealth() << endl;
    } else {
        cout << hero.getName() << " was defeated by one of the " << arena.getMonsterAmount() << " remaining monsters..." << endl;
    }
    return 0;
}
