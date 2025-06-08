#include<iostream>
#include "../Headers/dice.hpp"
#include "../Headers/diceBag.hpp"

int main(){

    Dice myDice(6);
    DiceBag myDiceBag(5,6);
    myDiceBag.roll();
  
    myDice.roll();
    std::cout << myDice.getCurrentFace() << std::endl;

    return 0;
}