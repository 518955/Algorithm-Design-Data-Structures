#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move {
public:
    bool beats(const Move* other) const override;
};

#endif // ROBOT_H

