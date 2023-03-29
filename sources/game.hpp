#pragma once

#include "iostream"
#include "player.hpp"

using namespace std;


namespace ariel{

    class Game {

        private:
            string name;
            Player p1;
            Player p2;

	    public:
            Game(Player&, Player&);
            void playAll();
            void printWiner();
            void printLog();
            void printStats();
            void playTurn();
            void printLastTurn();
    };
};            