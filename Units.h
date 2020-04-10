#ifndef GAME_UNITS_H
#define GAME_UNITS_H

class Unit {
protected:
    int health_ = 0;
    int cost_ = 0;

public:
    Unit() = default;
    ~Unit() = default;

    bool IsDead() {
        return health_ <= 0;
    }

    int GetCost() {
        return cost_;
    }
};

class Agent : public Unit {
    const static int kAgentHealth = 150;
    const static int kAgentCost = 1500;

public:
    Agent() : Unit() {
        health_ = kAgentHealth;
        cost_ = kAgentCost;
    }
};

class Cavalryman : public Unit {
    const static int kCavalrymanHealth = 100;
    const static int kCavalrymanCost = 1000;

public:
    Cavalryman() : Unit() {
        health_ = kCavalrymanHealth;
        cost_ = kCavalrymanCost;
    }
};

class Infantryman : public Unit {
    const static int kInfantrymanHealth = 50;
    const static int kInfantrymanCost = 500;

public:
    Infantryman() : Unit() {
        health_ = kInfantrymanHealth;
        cost_ = kInfantrymanCost;
    }
};


#endif //GAME_UNITS_H
