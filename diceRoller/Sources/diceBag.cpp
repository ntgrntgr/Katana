#include<iostream>
#include "../Headers/diceBag.hpp"
#include "../Headers/dice.hpp"
#include<vector>

DiceBag::DiceBag(){
    
}

DiceBag::DiceBag(short dNumberOfDice, short dNumberOfFaces){
    setNumberOfDice(dNumberOfDice);
    setTotalRolled(0);
    for(short i = 0; i < dNumberOfDice; i++){
        Dice die(dNumberOfFaces);
        addDiceToBag(die);
    }
}

void DiceBag::roll(){
    //todo
    for(Dice die : diceInBag){
        die.roll();
        std::cout << die.getCurrentFace() << std::endl;


    }
    

}

void DiceBag::addDiceToBag(Dice dDice){
    diceInBag.push_back(dDice);

}

void DiceBag::emptyDiceBag(){
    diceInBag.clear();
}

short DiceBag::getNumberOfDice(){
    return diceInBag.size();
}

void DiceBag::setNumberOfDice(short dNumberOfDice){
    numberOfDice = dNumberOfDice;
}

void DiceBag::setTotalRolled(short dTotalRolled){
    totalRoled = dTotalRolled;
}

short DiceBag::getTotalRolled(){
    return totalRoled;
}

DiceBag::~DiceBag(){
    std::cout << "Destructor called" << std::endl;
}