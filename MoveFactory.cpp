#include "MoveFactory.h"

Move* MoveFactory::createMove(const std::string& moveName) {
    if (moveName == "Rock") return new Rock();
    if (moveName == "Paper") return new Paper();
    if (moveName == "Scissors") return new Scissors();
    if (moveName == "Robot") return new Robot();
    if (moveName == "Monkey") return new Monkey();
    if (moveName == "Pirate") return new Pirate();
    if (moveName == "Ninja") return new Ninja();
    if (moveName == "Zombie") return new Zombie();
    return nullptr;
}
