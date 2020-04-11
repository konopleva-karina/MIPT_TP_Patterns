#include "Game.h"

int main() {
    Game new_game;

    Southerners southern_fraction;
    Army* starks_army = new_game.CreateArmy(southern_fraction);

    Northerners northern_fraction;
    Army* lannisters_army = new_game.CreateArmy(northern_fraction);

    return 0;
}
