#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"

bool Zombie::beats(const Move* other) const {
    return dynamic_cast<const Robot*>(other) || dynamic_cast<const Monkey*>(other);
}
