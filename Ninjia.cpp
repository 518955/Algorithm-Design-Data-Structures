#include "Ninja.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"

bool Ninja::beats(const Move* other) const {
    if (dynamic_cast<const Zombie*>(other) != nullptr) return true;
    if (dynamic_cast<const Monkey*>(other) != nullptr) return true;
    if (dynamic_cast<const Robot*>(other) != nullptr) return false;
    if (dynamic_cast<const Pirate*>(other) != nullptr) return false;
    return false;
}
