#include "Computer.h"

char Computer::makeMove() {
    return 'R';  // Computer always plays Rock
}

std::string Computer::getName() const {
    return "Computer";
}
