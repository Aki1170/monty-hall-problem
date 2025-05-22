#include <iostream>
#include "stubborn_player.h"
#include "switching_player.h"
#include "probabilistic_player.h"
#include "simulation.h"

int main() {
    const int gameCount = 100000;

    StubbornPlayer alwaysStick;
    SwitchingPlayer alwaysSwitch;
    ProbabilisticPlayer maybeSwitch25(0.25);
    ProbabilisticPlayer maybeSwitch50(0.5);
    ProbabilisticPlayer maybeSwitch75(0.75);

    Simulation sim(gameCount);

    sim.run(alwaysStick);
    std::cout << "StubbornPlayer win rate: " << sim.getWinRate() << "%" << std::endl;

    sim.run(alwaysSwitch);
    std::cout << "SwitchingPlayer win rate: " << sim.getWinRate() << "%" << std::endl;

    sim.run(maybeSwitch25);
    std::cout << "ProbabilisticPlayer (25%) win rate: " << sim.getWinRate() << "%" << std::endl;

    sim.run(maybeSwitch50);
    std::cout << "ProbabilisticPlayer (50%) win rate: " << sim.getWinRate() << "%" << std::endl;

    sim.run(maybeSwitch75);
    std::cout << "ProbabilisticPlayer (75%) win rate: " << sim.getWinRate() << "%" << std::endl;

    return 0;
}
