#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"

bool Ninja::beats(const Move* other) const {
    return dynamic_cast<const Pirate*>(other) || dynamic_cast<const Zombie*>(other);
}
