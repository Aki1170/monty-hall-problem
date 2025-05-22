// ----- host.h -----
#ifndef HOST_H
#define HOST_H

#include "player.h"

// The Host class manages the game logic: placing the prize, revealing an empty hat,
// and determining if the player has won.
class Host {
private:
    int prizePosition;              // Index of the hat hiding the prize (0, 1, or 2)

    // Randomly selects the position of the prize at the start of each game
    void initializeGame();

    // Chooses an empty hat to reveal that is not the player's first guess and not the prize
    int revealEmptyHat(int firstGuess);

    // Checks if the player's second guess matches the prize position
    bool isWin(int secondGuess) const;

public:
    // Executes one round of the game with the given player
    bool play(Player& player);
};

#endif // HOST_H
