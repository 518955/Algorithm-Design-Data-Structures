#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Move.h"
#include <string>

class Human : public Player {
public:
    Human(const std::string& name, Move* move);
    Move* makeMove() const override;
    std::string getName() const override;
private:
    std::string name;
    Move* move;
};

#endif // HUMAN_H



