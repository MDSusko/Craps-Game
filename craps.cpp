//Source file for craps game

#include "craps.h"
#include "dice.h"
#include <iostream>

//Initialize Craps Game 

int firstRoll = dieRoll() + dieRoll();
printDiceRoll(firstRoll, 0);

if (firstRoll == 7 || firstRoll == 11){
    return true;                            //Natural, you win
}
else if (firstRoll == 2 || firstRoll == 3 || firstRoll == 12){
    return false;                           // Craps, you loose 
}
else {
    std::cout << "Point is " << firstRoll << "\n";
    while (true) {
        int nextRoll = dieRoll() + dieRoll();
        printDiceRoll(nextRoll, 0);
        if (nextRoll == firstRoll) {
            return true;                // You rolled the point, you win
        }
        else if (nextRoll == 7){
            return false;               // You rolled a 7, you lose 
        }
    }
}