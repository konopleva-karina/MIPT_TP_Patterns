#include "UnitFactories.h"

//============ Southerners ============//

Cavalryman Southerners::CreateCavalryman() {
    return SouthernCavalryman();
}

Infantryman Southerners::CreateInfantryman() {
    return SouthernInfantryman();
}

Agent Southerners::CreateAgent() {
    return SouthernAgent();
}

//============ Northerners ============//

Cavalryman Northerners::CreateCavalryman() {
    return NorthernCavalryman();
}

Infantryman Northerners::CreateInfantryman() {
    return NorthernInfantryman();
}

Agent Northerners::CreateAgent() {
    return NorthernAgent();
}
