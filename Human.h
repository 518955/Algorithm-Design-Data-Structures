#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

class Human : public Player {
public:
    Human(const std::string& name);
    Move* makeMove() override;
    std::string getName() const override;
private:
    std::string name;
};

#endif // HUMAN_H




