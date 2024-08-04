#include "Human.h"

Human::Human(const std::string& name, Move* move) 
    : name(name), move(move) {}

Move* Human::makeMove() const {
    return move;
}

std::string Human::getName() const {
    return name;
}
