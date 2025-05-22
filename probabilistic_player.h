#ifndef PROBABILISTIC_PLAYER_H
#define PROBABILISTIC_PLAYER_H

#include "player.h"

//  Player that switches based on a given probability
class ProbabilisticPlayer : public Player {
private:
    double switchProbability;  // Probability to switch (0.0 = never, 1.0 = always)

public:
    // Constructor that sets the switching probability (must be between 0.0 and 1.0)
    explicit ProbabilisticPlayer(double probability);

    // Decides whether to switch based on the probability
    int makeSecondGuess(int revealedEmpty) override;
};

#endif // PROBABILISTIC_PLAYER_H
