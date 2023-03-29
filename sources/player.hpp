#pragma once


#include "iostream"

using namespace std;


namespace ariel {

    class Player {

        const int all_cards = 26;

    private:
        string name;
        int cards_taken = 0;
        int stack_size = this->all_cards;

    public:
        Player(string name) : name(name) {}
        int stacksize();
        int cardesTaken();
        string get_name();

    };
}