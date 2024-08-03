#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie : public Move {
public:
    std::string getName() const override { return "Zombie"; }
    bool beats(const Move* other) const override;
};

#endif // ZOMBIE_H
