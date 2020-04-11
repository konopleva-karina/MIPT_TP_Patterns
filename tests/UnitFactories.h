#ifndef GAME_UNITFACTORIES_H
#define GAME_UNITFACTORIES_H

#include <vector>
#include "Units.h"

class Army {
    std::vector<Cavalryman*> cavalrymen_;
    std::vector<Infantryman*> infantrymen_;
    std::vector<Agent*> agents_;

public:
    Army() = default;
    ~Army() {
        cavalrymen_.clear();
        infantrymen_.clear();
        agents_.clear();
    }

    void AddCavalrymen(const std::vector<Cavalryman*> cavalrymen) {
        for (auto cm : cavalrymen) {
            cavalrymen_.push_back(cm);
        }
    }

    void AddInfantrymen(std::vector<Infantryman*> infantrymen) {
        for (auto im : infantrymen) {
            infantrymen_.push_back(im);
        }
    }

    void AddAgents(std::vector<Agent*> agents) {
        for (auto a : agents) {
            agents_.push_back(a);
        }
    }
};

//abstract factory
class FractionFactory {
public:
    virtual std::vector<Cavalryman*> CreateCavalrymen() = 0;
    virtual std::vector<Infantryman*> CreateInfantrymen() = 0;
    virtual std::vector<Agent*> CreateAgents() = 0;
};

//concrete factory
class Southerners : public FractionFactory {
    const static int kCavalrymenCount = 10;
    const static int kInfantrymenCount = 20;
    const static int kAgentCount = 2;

public:
    std::vector<Cavalryman*> CreateCavalrymen() override;
    std::vector<Infantryman*> CreateInfantrymen() override ;
    std::vector<Agent*> CreateAgents() override ;
};

//concrete factory
class Northerners : public FractionFactory {
    const static int kCavalrymenCount = 15;
    const static int kInfantrymenCount = 20;
    const static int kAgentCount = 1;

public:
    std::vector<Cavalryman*> CreateCavalrymen() override;
    std::vector<Infantryman*> CreateInfantrymen() override ;
    std::vector<Agent*> CreateAgents() override ;
};


#endif //GAME_UNITFACTORIES_H
