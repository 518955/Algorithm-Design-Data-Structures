#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include <string>

class Player {
public:
    virtual ~Player() noexcept;  // Declare destructor noexcept
    virtual Move* makeMove() const = 0;
    virtual std::string getName() const = 0;
};

#endif // PLAYER_H

