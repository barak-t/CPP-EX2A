/**
 * Tests
 * 
 * AUTHOR: Barak Tarab
 */

#include <sstream>
#include "doctest.h"
using namespace std;


#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
using namespace ariel;

// #include <string>


// GOOD INPUT
//~~~~~~~~~~~~



TEST_CASE("Test Card"){

    Card c1(1, CardShape::Club);

    CHECK_EQ(1, c1.get_value());
    CHECK_EQ(CardShape::Club, c1.get_shape());

    CHECK_THROWS(Card(0, CardShape::Heart));
    CHECK_THROWS(Card(14, CardShape::Spade));

}

TEST_CASE("Test Player") {

    Player p1("Elad");
    Player p2("Nadav");
    CHECK_EQ(p1.get_name(), "Elad");

    CHECK_EQ(0, p1.cardesTaken());
    CHECK_EQ(52/2, p1.stacksize());

}



