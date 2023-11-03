// Source file for dice functions 

#include "dice.h"
#include <iostream>
#include <cstdlib>

//Die roll 
int dieRoll() {
    return (std::rand() % 6) + 1;
}

//Output to screen 
void printDiceRoll(int die1, int die2){
    std::cout << "Die 1: " << die1 << "\n";
    std::cout << "Die 2: " << die2 << "\n";
    std::cout << "Sum: " << die1 + die2 << "\n";
}