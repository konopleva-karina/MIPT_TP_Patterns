#include "Game.h"

Army* Game::CreateArmy(FractionFactory& fraction) {
    Army* new_army = new Army;
    new_army->AddCavalrymen(fraction.CreateCavalrymen());
    new_army->AddInfantrymen(fraction.CreateInfantrymen());
    new_army->AddAgents(fraction.CreateAgents());

    return new_army;
}

