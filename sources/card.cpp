#include "iostream"
#include "stdio.h"
#include "card.hpp"

namespace ariel {

    Card::Card(int value, CardShape shape): value(value), shape(shape){
        if (value < 1  || value > 13) {
            throw std::invalid_argument("Value incorrect, must to be between 1 to 13.");
        }
    }

    int Card::get_value() {
        return this->value;
    }

    CardShape Card::get_shape() {
        return this->shape;
    }
}