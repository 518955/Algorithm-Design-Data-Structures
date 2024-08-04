#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Human humanPlayer("Alice");
    Computer computerPlayer("AI");
    Referee referee;

    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

    if (winner) {
        std::cout << "The winner is: " << winner->getName() << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }

    return 0;
}
