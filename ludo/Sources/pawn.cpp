#include"../Headers/pawn.hpp"

Pawn::Pawn(){

}

void Pawn::setIdentifier(short newIdentifier){
    this->identifier = newIdentifier;
}

short Pawn::getIdentifier(){
    return this->identifier;
}

