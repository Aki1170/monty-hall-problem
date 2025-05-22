#include "stubborn_player.h"

// Always returns the same choice as the first guess
// Ignores the revealed empty hat by the host
int StubbornPlayer::makeSecondGuess(int revealedEmpty) {
    return firstGuess;
}
