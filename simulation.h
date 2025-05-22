#ifndef SIMULATION_H
#define SIMULATION_H

#include "player.h"

//  Class to run and evaluate Monty Hall simulations
class Simulation {
private:
    int totalGames;  // Total number of simulated games
    int totalWins;   // Number of games the player won

public:
    // Constructor with optional number of games (default: 1,000,000)
    Simulation(int games = 1000000);

    // Runs the simulation using the specified player strategy
    void run(Player& player);

    // Returns the win rate (0.0 – 100.0 %)
    double getWinRate() const;
};

#endif // SIMULATION_H
