#include <iostream>
#include <ctime> // for time()
#include <cstdlib> // for srand()
#include "dice.h"
#include "craps.h"

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int totalRolls = 0;
    int wins = 0;
    int losses = 0;

    // Simulate multiple games of craps
    for (int i = 0; i < 10; i++) { // You can change the number of games
        totalRolls++;

        std::cout << "Game " << totalRolls << ":\n";
        bool result = playCraps();

        if (result) {
            std::cout << "You win!\n";
            wins++;
        } else {
            std::cout << "You lose.\n";
            losses++;
        }

        std::cout << "-----------------------------------\n";
    }

    std::cout << "Statistics after " << totalRolls << " games:\n";
    std::cout << "Wins: " << wins << "\n";
    std::cout << "Losses: " << losses << "\n";

    return 0;
}
