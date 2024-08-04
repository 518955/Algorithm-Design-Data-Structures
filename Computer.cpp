#include "Computer.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Computer::Computer(const std::string& name)
    : name(name), rng(std::random_device{}()), dist(0, 4) {
    moves.push_back(std::make_unique<Monkey>());
    moves.push_back(std::make_unique<Robot>());
    moves.push_back(std::make_unique<Pirate>());
    moves.push_back(std::make_unique<Ninja>());
    moves.push_back(std::make_unique<Zombie>());
}

Move* Computer::makeMove() const {
    std::size_t index = dist(rng);
    return moves[index].get();
}

std::string Computer::getName() const {
    return name;
}

Computer::~Computer() noexcept = default;
