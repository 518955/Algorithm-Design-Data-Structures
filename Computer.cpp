#include "Computer.h"
#include "MoveFactory.h"
#include <cstdlib>
#include <ctime>
#include <vector>

Computer::Computer(const std::string& name) : name(name) {
    std::srand(std::time(nullptr)); // Seed for random number generator
}

Move* Computer::makeMove() {
    std::vector<std::string> moves = {"Rock", "Paper", "Scissors", "Robot", "Monkey", "Pirate", "Ninja", "Zombie"};
    int randomIndex = std::rand() % moves.size();
    return MoveFactory::createMove(moves[randomIndex]);
}

std::string Computer::getName() const {
    return name;
}
