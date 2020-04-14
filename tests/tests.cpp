#include <gtest/gtest.h>

#include "../game/Units.h"
#include "../game/UnitFactories.h"

class UnitFixture : public ::testing::Test {
public:
    virtual ~UnitFixture() {
        delete u;
        
        delete sa;
        delete sc;
        delete si;

        delete na;
        delete nc;
        delete ni;
    }

protected:
    virtual void SetUp() {
        u = new Unit();

        sa = new SouthernAgent();
        sc = new SouthernCavalryman();
        si = new SouthernInfantryman();

        na = new NorthernAgent();
        nc = new NorthernCavalryman();
        ni = new NorthernInfantryman();        
    }

    Unit* u;
    SouthernAgent* sa;
    SouthernCavalryman* sc;
    SouthernInfantryman* si;

    NorthernAgent* na;
    NorthernCavalryman* nc;
    NorthernInfantryman* ni;
};

class FactoryFixture : public ::testing::Test {
public:
    virtual ~FactoryFixture() {
        delete n;
        delete s;
    }

protected:
    virtual void SetUp() {
        n = new Northerners();
        s = new Southerners();
    }

    Northerners* n;
    Southerners* s;
};

TEST_F(UnitFixture, CheckUnitsCost) {
    ASSERT_EQ(0, u->GetCost());
    ASSERT_EQ(1400, sa->GetCost());
    ASSERT_EQ(1000, sc->GetCost());
    ASSERT_EQ(700, si->GetCost());

    ASSERT_EQ(1500, na->GetCost());
    ASSERT_EQ(800, nc->GetCost());
    ASSERT_EQ(800, ni->GetCost());
    
}

TEST_F(UnitFixture, CheckUnitStatus) {
    ASSERT_EQ(true, u->IsDead());
    ASSERT_EQ(false, sa->IsDead());
    ASSERT_EQ(false, sc->IsDead());
    ASSERT_EQ(false, si->IsDead());

    ASSERT_EQ(false, na->IsDead());
    ASSERT_EQ(false, nc->IsDead());
    ASSERT_EQ(false, ni->IsDead());
}

TEST_F(FactoryFixture, CheckNorthernersProducts) {
    ASSERT_EQ(n->CreateInfantryman().GetCost(), 800);
    ASSERT_EQ(n->CreateAgent().GetCost(), 1500);
    ASSERT_EQ(n->CreateCavalryman().GetCost(), 800);
}

TEST_F(FactoryFixture, CheckSouthernersProducts) {
    ASSERT_EQ(s->CreateInfantryman().GetCost(), 700);
    ASSERT_EQ(s->CreateAgent().GetCost(), 1400);
    ASSERT_EQ(s->CreateCavalryman().GetCost(), 1000);
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


