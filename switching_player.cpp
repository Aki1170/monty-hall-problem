#include "switching_player.h"

// Chooses the remaining hat that is neither the first guess nor the revealed empty one
int SwitchingPlayer::makeSecondGuess(int revealedEmpty) {
    int secondGuess = firstGuess;

    for (int i = 0; i < 3; ++i) {
        if (i != firstGuess && i != revealedEmpty) {
            secondGuess = i;
        }
    }

    return secondGuess;
}
