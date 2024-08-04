#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include "Move.h"
#include <string>

class MoveFactory {
public:
    static Move* createMove(const std::string& moveName);
};

#endif // MOVEFACTORY_H
