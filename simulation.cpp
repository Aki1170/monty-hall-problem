#include "simulation.h"
#include "host.h"

// Initializes the simulation with a given number of games (default: 1 million)
Simulation::Simulation(int games) : totalGames(games), totalWins(0) {}

void Simulation::run(Player& player){
    totalWins = 0;
    Host host;

    for (int i = 0; i < totalGames; ++i) {
        if (host.play(player)){
            totalWins++;       // Count a win if the player guessed correctly
        }
    }
}

// Returns the win rate as a percentage
double Simulation::getWinRate() const {
    double winRate = static_cast<double>(totalWins) / totalGames;
    return winRate * 100.0;
}
