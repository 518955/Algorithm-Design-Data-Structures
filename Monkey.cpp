#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

bool Monkey::beats(const Move* other) const {
    return dynamic_cast<const Robot*>(other) || dynamic_cast<const Zombie*>(other);
}
