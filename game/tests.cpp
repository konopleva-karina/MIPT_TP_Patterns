#include <gtest/gtest.h>
#include "Units.h"
#include "UnitFactories.h"

class UnitFixture : public ::testingTest {
public:
    virtual ~UnitFixture() {
        delete u;
        delete a;
        delete c;
        delete i;
    }

protected:
    virtual void SetUp() {
        u = new Unit();
        a = new Agent();
        c = new Cavalryman();
        i = new Infantryman();
    }

    Unit* u;
    Agent* a;
    Cavalryman* c;
    Infantryman* i;
};

class FactoryFixture : public ::testingTest {
public:
    virtual ~FactoryFixture() {
        delete n;
    }

protected:
    virtual void SetUp() {
        n = new Northerners();
    }

    Northerners* n;
};

TEST_F(UnitFixture, CheckUnitsCost) {
    ASSERT_EQ(0, u->GetCost());
    ASSERT_EQ(1500, a->GetCost());
    ASSERT_EQ(1000, c->GetCost());
    ASSERT_EQ(500, i->GetCost());
    
}

TEST_F(UnitFixture, CheckUnitStatus) {
    ASSERT_EQ(true, u->IsDead());
    ASSERT_EQ(false, a->IsDead());
    ASSERT_EQ(false, c->IsDead());
    ASSERT_EQ(false, i->IsDead());
}


TEST_F(FactoryFixture, WarriorsAreCorrect) {
    ASSERT_EQ(1500, n->CreateAgents().GetCost());
    ASSERT_EQ(1000, n->CreateCavalrymen().GetCost()));
    ASSERT_EQ(500, n->CreateInfantrymen().GetCost()));
}


