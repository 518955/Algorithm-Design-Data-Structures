#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey : public Move {
public:
    bool beats(const Move* other) const override;
};

#endif // MONKEY_H
