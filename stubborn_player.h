#ifndef STUBBORN_PLAYER_H
#define STUBBORN_PLAYER_H

#include "player.h"

//  Player who always sticks with the initial guess (never switches)
class StubbornPlayer : public Player {
public:
    // Always returns the first guess, ignoring the revealed empty hat
    int makeSecondGuess(int revealedEmpty) override;
};

#endif // STUBBORN_PLAYER_H
