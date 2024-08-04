#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player {
public:
    virtual ~Player() = default;
    virtual Move* makeMove() const = 0;
    virtual std::string getName() const = 0;
};

#endif // PLAYER_H

