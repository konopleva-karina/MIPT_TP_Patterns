#include "UnitFactories.h"

//============ Southerners ============//

std::vector<Cavalryman*> Southerners::CreateCavalrymen() {
    std::vector<Cavalryman*> cavalrymen;
    cavalrymen.reserve(kCavalrymenCount);

    for (int i = 0; i < kCavalrymenCount; ++i) {
        cavalrymen.push_back(new Cavalryman);
    }

    return cavalrymen;
}

std::vector<Infantryman*> Southerners::CreateInfantrymen() {
    std::vector<Infantryman*> infantrymen;
    infantrymen.reserve(kInfantrymenCount);
    for (int i = 0; i < kInfantrymenCount; ++i) {
        infantrymen.push_back(new Infantryman);
    }

    return infantrymen;
}

std::vector<Agent*> Southerners::CreateAgents() {
    std::vector<Agent*> agents;
    agents.reserve(kAgentCount);
    for (int i = 0; i < kAgentCount; ++i) {
        agents.push_back(new Agent);
    }

    return agents;
}

//============ Northerners ============//

std::vector<Cavalryman*> Northerners::CreateCavalrymen() {
    std::vector<Cavalryman*> cavalrymen;
    cavalrymen.reserve(kCavalrymenCount);

    for (int i = 0; i < kCavalrymenCount; ++i) {
        cavalrymen.push_back(new Cavalryman);
    }

    return cavalrymen;
}

std::vector<Infantryman*> Northerners::CreateInfantrymen() {
    std::vector<Infantryman*> infantrymen;
    infantrymen.reserve(kInfantrymenCount);
    for (int i = 0; i < kInfantrymenCount; ++i) {
        infantrymen.push_back(new Infantryman);
    }

    return infantrymen;
}

std::vector<Agent*> Northerners::CreateAgents() {
    std::vector<Agent*> agents;
    agents.reserve(kAgentCount);
    for (int i = 0; i < kAgentCount; ++i) {
        agents.push_back(new Agent);
    }

    return agents;
}
