#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>

class Computer : public Player {
public:
    Computer(const std::string& name);
    Move* makeMove() override;
    std::string getName() const override;
private:
    std::string name;
};

#endif // COMPUTER_H


