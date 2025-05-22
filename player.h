#ifndef PLAYER_H
#define PLAYER_H

// 🧠 Abstract base class for all player strategies in the Monty Hall game
class Player {
protected:
    // Stores the player's initial guess (e.g. hat 0–2)
    int firstGuess;

public:
    // Returns a random first guess and stores it
    // Defined in the base class, not virtual
    int makeFirstGuess();

    // Second guess after an empty hat is revealed
    // Must be implemented by derived classes
    virtual int makeSecondGuess(int revealedEmpty) = 0;

    // Virtual destructor – ensures proper cleanup via base class pointer
    virtual ~Player() {}
};

#endif // PLAYER_H
