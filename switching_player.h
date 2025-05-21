// ----- switching_player.h -----
#ifndef SWITCHING_PLAYER_H
#define SWITCHING_PLAYER_H

#include "player.h"

class SwitchingPlayer : public Player {
public:
    int makeSecondGuess(int revealedEmpty) override;
};

#endif // SWITCHING_PLAYER_H
