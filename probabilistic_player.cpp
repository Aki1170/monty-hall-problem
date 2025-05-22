#include "probabilistic_player.h"
#include <random>

// Constructor that stores the given switching probability
ProbabilisticPlayer::ProbabilisticPlayer(double probability)
    : switchProbability(probability) {}

// Makes the second guess based on the switching probability
int ProbabilisticPlayer::makeSecondGuess(int revealedEmpty) {
    std::random_device rd;                          // Gets true random entropy from the system
    std::mt19937 gen(rd());                         // Initializes Mersenne Twister RNG with entropy
    std::uniform_real_distribution<> dist(0.0, 1.0); // Uniform distribution between 0.0 and 1.0

    double randomValue = dist(gen);                 // Get a random value
    int secondGuess = firstGuess;                   // Default: stick with the first guess

    // Switch only if the random value is below the threshold
    if (randomValue < switchProbability) {
        // Choose the only hat that is not the first guess or the revealed empty one
        for (int i = 0; i < 3; ++i) {
            if (i != firstGuess && i != revealedEmpty) {
                secondGuess = i;
                break;
            }
        }
    }

    return secondGuess; // Return the decided second guess
}
