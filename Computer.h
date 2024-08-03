#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <vector>
#include <memory>
#include <random>

class Computer : public Player {
public:
    Computer(const std::string& name);
    Move* makeMove() const override;
    std::string getName() const override;
    ~Computer() noexcept override;  // Match the base class destructor
private:
    std::string name;
    std::vector<std::unique_ptr<Move>> moves;
    mutable std::mt19937 rng;  // Random number generator
    mutable std::uniform_int_distribution<std::size_t> dist;
};

#endif // COMPUTER_H
