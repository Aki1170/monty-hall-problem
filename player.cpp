#include "player.h"     // Own header file containing the class declaration
#include <random>       // For random number generation

// Generates a random first guess (0–2) and stores it
int Player::makeFirstGuess() {
    std::random_device rd;                      // Source of entropy
    std::mt19937 gen(rd());                     // Mersenne Twister engine seeded with rd
    std::uniform_int_distribution<> dist(0, 2); // Uniform distribution between 0 and 2

    firstGuess = dist(gen);                     // Generate and store the random guess
    return firstGuess;                          // Return the stored value
}
