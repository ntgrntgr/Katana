#include "../Headers/dice.hpp"
#include<iostream> 
#include<random>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> distrib(1,6);


Dice::Dice(short dNumberOfFaces){
    setNumberOfFaces(dNumberOfFaces);
}

short Dice::getNumberOfFaces(){
    return numberOfFaces;
}

void Dice::setNumberOfFaces(short dNumberOfFaces){
    numberOfFaces = dNumberOfFaces;
}

short Dice::getCurrentFace(){
    return currentFace;
}

void Dice::setCurrentFace(short dCurrentFace){
    currentFace = dCurrentFace;
}

void Dice::roll(){
   short randomN = distrib(gen);
   setCurrentFace(randomN); 
}