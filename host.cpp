#include "host.h"
#include <random>

// Initializes the game by randomly choosing where the prize is hidden
void Host::initializeGame() {
    std::random_device rd;                     // Gets true random entropy from the system
    std::mt19937 gen(rd());                    // Initializes Mersenne Twister RNG with entropy
    std::uniform_int_distribution<> dist(0, 2); // Uniform distribution for values 0, 1, 2

    prizePosition = dist(gen);                 // Randomly assign the prize to one of the hats
}

// Reveals a hat that is neither the player's first guess nor the prize
int Host::revealEmptyHat(int firstGuess) {
    int emptyHat = -1; // Sentinel value for safety

    for (int i = 0; i < 3; ++i) {
        if (i != firstGuess && i != prizePosition) {
            emptyHat = i;  // Found a valid empty hat
            break;         // Stop searching once one is found
        }
    }

    return emptyHat; // Return the revealed empty hat
}

// Checks whether the player's second guess matches the prize position
bool Host::isWin(int secondGuess) const {
    return secondGuess == prizePosition;
}

// Runs a full game round with the given player
bool Host::play(Player& player) {
    initializeGame();                       // Randomly place the prize

    int first = player.makeFirstGuess();    // Player makes initial guess
    int revealed = revealEmptyHat(first);   // Host reveals an empty hat
    int second = player.makeSecondGuess(revealed); // Player decides to switch or stay

    return isWin(second);                   // Return true if player guessed the prize
}
