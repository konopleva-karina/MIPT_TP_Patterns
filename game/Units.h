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
public:
    Agent() : Unit() {
        health_ = kAgentHealth;
    }
};


class NorthernAgent : public Agent {
    const static int kNorthernAgentCost = 1500;
public:
    NorthernAgent() : Agent() {
        cost_ = kNorthernAgentCost;
    }
};


class SouthernAgent : public Agent {
    const static int kSouthernAgentCost = 1400;
public:
    SouthernAgent() : Agent() {
        cost_ = kSouthernAgentCost;
    }
};


class Cavalryman : public Unit {
    const static int kCavalrymanHealth = 100;

public:
    Cavalryman() : Unit() {
        health_ = kCavalrymanHealth;
    }
};


class NorthernCavalryman : public Cavalryman {
    const static int kNorthernCavalrymanCost = 800;

public:
    NorthernCavalryman() : Cavalryman() {
        cost_ = kNorthernCavalrymanCost;
    }
};

class SouthernCavalryman : public Cavalryman {
    const static int kSouthernCavalrymanCost = 1000;

public:
    SouthernCavalryman() : Cavalryman() {
        cost_ = kSouthernCavalrymanCost;
    }
};


class Infantryman : public Unit {
    const static int kInfantrymanHealth = 50;

public:
    Infantryman() : Unit() {
        health_ = kInfantrymanHealth;
    }
};

class NorthernInfantryman : public Infantryman{
    const static int kNorthernInfantrymanCost = 800;

public:
    NorthernInfantryman() : Infantryman() {
        cost_ = kNorthernInfantrymanCost;
    }
};

class SouthernInfantryman : public Infantryman{
    const static int kSouthernInfantrymanCost = 700;

public:
    SouthernInfantryman() : Infantryman() {
        cost_ = kSouthernInfantrymanCost;
    }
};


#endif //GAME_UNITS_H
