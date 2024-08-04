#include "Pirate.h"
#include "Monkey.h"
#include "Ninja.h"

bool Pirate::beats(const Move* other) const {
    return dynamic_cast<const Monkey*>(other) || dynamic_cast<const Ninja*>(other);
}
