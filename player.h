// ----- player.h -----
#ifndef PLAYER_H
#define PLAYER_H

class Player {
protected:
    int firstGuess;

public:
    virtual int makeFirstGuess();
    virtual int makeSecondGuess(int revealedEmpty) = 0;
    virtual ~Player() {}
};

#endif // PLAYER_H
