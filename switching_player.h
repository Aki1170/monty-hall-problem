#ifndef SWITCHING_PLAYER_H
#define SWITCHING_PLAYER_H

#include "player.h"

//  Player who always switches their initial guess after an empty hat is revealed
class SwitchingPlayer : public Player {
public:
    // Returns the remaining hat that is neither the first guess nor the revealed empty one
    int makeSecondGuess(int revealedEmpty) override;
};

#endif // SWITCHING_PLAYER_H
