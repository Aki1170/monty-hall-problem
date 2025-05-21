// ----- stubborn_player.h -----
#ifndef STUBBORN_PLAYER_H
#define STUBBORN_PLAYER_H

#include "player.h"

class StubbornPlayer : public Player {
public:
    int makeSecondGuess(int revealedEmpty) override;
};

#endif // STUBBORN_PLAYER_H
