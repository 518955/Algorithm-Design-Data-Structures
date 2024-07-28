#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    virtual char makeMove() = 0;  // Pure virtual function
    virtual std::string getName() const = 0;  // Pure virtual function
    virtual ~Player() {}  // Virtual destructor
};

#endif // PLAYER_H


