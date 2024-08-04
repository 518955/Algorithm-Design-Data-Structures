#include "Referee.h"

Player* Referee::refGame(Player* p1, Player* p2) {
    Move* move1 = p1->makeMove();
    Move* move2 = p2->makeMove();
    if (move1->beats(move2)) {
        return p1;
    } else if (move2->beats(move1)) {
        return p2;
    } else {
        return nullptr; // It's a tie
    }
}
