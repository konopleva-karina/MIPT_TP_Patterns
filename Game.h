#ifndef GAME_GAME_H
#define GAME_GAME_H

#include "UnitFactories.h"

class Game {
public:
    Army* CreateArmy(FractionFactory& fraction);

    static void StartGame();

};


#endif //GAME_GAME_H
