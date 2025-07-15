#include"../Headers/playerBase.hpp"

PlayerBase::PlayerBase(){
    

};

short PlayerBase::getIdentifier(){
    return this->identifier;
}

void PlayerBase::setIdentifier(short newIdentifier){
    this->identifier = newIdentifier;
}