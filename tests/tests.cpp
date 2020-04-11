#include <gtest/gtest.h>

#include "Units.h"
#include "UnitFactories.h"

class UnitFixture : public ::testing::Test {
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

class FactoryFixture : public ::testing::Test {
public:
    virtual ~FactoryFixture() {
        n->CreateCavalrymen().clear();
        n->CreateInfantrymen().clear();
        n->CreateAgents().clear();
        delete n;

        s->CreateCavalrymen().clear();
        s->CreateInfantrymen().clear();
        s->CreateAgents().clear();
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

TEST_F(FactoryFixture, CheckNorthernersComplectation) {
    ASSERT_EQ(n->CreateInfantrymen().size(), 20);
    ASSERT_EQ(n->CreateAgents().size(), 1);
    ASSERT_EQ(n->CreateCavalrymen().size(), 15);
}

TEST_F(FactoryFixture, CheckSouthernersComplectation) {
    ASSERT_EQ(s->CreateInfantrymen().size(), 20);
    ASSERT_EQ(s->CreateAgents().size(), 2);
    ASSERT_EQ(s->CreateCavalrymen().size(), 10);
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


