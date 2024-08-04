#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"

bool Robot::beats(const Move* other) const {
    return dynamic_cast<const Pirate*>(other) || dynamic_cast<const Ninja*>(other);
}
