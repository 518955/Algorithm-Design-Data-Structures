// Main Function: Creates instances of Human, Computer, and Referee, simulates the game, and prints the winner.

#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human humanPlayer("Mei");
    Computer computerPlayer;
    Referee referee;

    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

    if (winner == nullptr) {
        std::cout << "It's a Tie.\n";
    } else {
        std::cout << winner->getName() << " Wins.\n";
    }

    return 0;
}
