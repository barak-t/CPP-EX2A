#include "iostream"
#include "stdio.h"
#include "player.hpp"


namespace ariel {
    int Player::cardesTaken() {
        return this->cards_taken;
    }

    int Player::stacksize() {
        return this->stack_size;
    }

    string Player::get_name() {
        return this->name;
    }

}