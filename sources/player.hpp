#pragma once


#include "iostream"

using namespace std;


namespace ariel {

    class Player {

        private:
            string name;
            int cards_taken = 0;
            int stack_size = 26;

	    public:
            Player(string name) : name(name) {}
            int stacksize();
            int cardesTaken();
            string get_name();

    };
};            