// ----- simulation.h -----
#ifndef SIMULATION_H
#define SIMULATION_H

#include "player.h"

class Simulation {
private:
    int totalGames;
    int totalWins;

public:
    Simulation(int games = 1000000);
    void run(Player& player);
    double getWinRate() const;
};

#endif // SIMULATION_H
