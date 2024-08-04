#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

int main() {
    // Create a move for the Human player
    Move* move1 = new Monkey();
    Human* h = new Human("John", move1);

    // Create another Human player with a different move
    Move* move2 = new Robot();
    Human* h2 = new Human("Jane", move2);

    // Create a Computer player
    Computer* c = new Computer("AI");

    // Referee to manage the game
    Referee ref;

    // Determine the winner between two Human players
    Player* winner1 = ref.refGame(h, h2);
    std::cout << "Winner between " << h->getName() << " and " << h2->getName() << " is " << (winner1 ? winner1->getName() : "None") << std::endl;

    // Determine the winner between a Human player and a Computer player
    Player* winner2 = ref.refGame(h, c);
    std::cout << "Winner between " << h->getName() << " and " << c->getName() << " is " << (winner2 ? winner2->getName() : "None") << std::endl;

    // Clean up
    delete move1;
    delete move2;
    delete h;
    delete h2;
    delete c;

    return 0;
}
