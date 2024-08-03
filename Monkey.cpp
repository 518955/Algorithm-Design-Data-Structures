#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

bool Monkey::beats(const Move* other) const {
    if (dynamic_cast<const Robot*>(other) != nullptr) return false;
    if (dynamic_cast<const Pirate*>(other) != nullptr) return true;
    if (dynamic_cast<const Ninja*>(other) != nullptr) return true;
    if (dynamic_cast<const Zombie*>(other) != nullptr) return true;
    return false;
}
