#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Monkey.h"
#include "Zombie.h"

bool Robot::beats(const Move* other) const {
    if (dynamic_cast<const Pirate*>(other) != nullptr) return true;
    if (dynamic_cast<const Ninja*>(other) != nullptr) return true;
    if (dynamic_cast<const Monkey*>(other) != nullptr) return false;
    if (dynamic_cast<const Zombie*>(other) != nullptr) return false;
    return false;
}
