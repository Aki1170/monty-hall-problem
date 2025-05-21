// ----- host.h -----
#ifndef HOST_H
#define HOST_H

#include "player.h"

class Host {
private:
    int prizePosition;
    void initializeGame();
    int revealEmptyHat(int firstGuess);
    bool isWin(int secondGuess) const;

public:
    bool play(Player& player);
};

#endif // HOST_H
