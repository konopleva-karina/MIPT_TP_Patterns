#ifndef GAME_UNITFACTORIES_H
#define GAME_UNITFACTORIES_H

#include <vector>
#include "Units.h"

//abstract factory
class FractionFactory {
public:
    virtual Cavalryman CreateCavalryman() = 0;
    virtual Infantryman CreateInfantryman() = 0;
    virtual Agent CreateAgent() = 0;
    virtual ~FractionFactory() = default;
};

//concrete factory
class Southerners : public FractionFactory {
public:
    Cavalryman CreateCavalryman() override;
    Infantryman CreateInfantryman() override;
    Agent CreateAgent() override;
};

//concrete factory
class Northerners : public FractionFactory {
public:
    Cavalryman CreateCavalryman() override;
    Infantryman CreateInfantryman() override ;
    Agent CreateAgent() override ;
};


#endif //GAME_UNITFACTORIES_H
