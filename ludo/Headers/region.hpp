#pragma once
#include"position.hpp"
#include"grid.hpp"

class Region{
    private:
        short identifier;
        Position startingPoint;// starting point is where the pawn enters the region after leaving the base
        Position endingPoint;// where the pawn exits a region to go to another region
        Position entryPoint;// where a pawn enters a region from another region
        Position exitPoint;// this is where a pawn enters the row that goes home

        Grid grid;
        

    public:
        
        Grid getGrid(){return this->grid;}
        void setGrid(Grid newGrid){this->grid = newGrid;}
        short getIdentifier(){return this->identifier;}
        void setIdentifier(short newIdentifier){this->identifier = newIdentifier;}
        void setStartingPosition(Position newStartingPosition){this->startingPoint = newStartingPosition;}
        Position getStartingPosition() {return this->startingPoint;};
        void setEndingPosition(Position newEndingPosition){this->endingPoint = newEndingPosition;}
        Position getEndingPosition(){return this-> endingPoint;}
        void setEntryPoint(Position newEntryPoint){this->entryPoint = newEntryPoint;}
        Position getEntryPoint(){return this->entryPoint;}
        void setExitPosition(Position newExitPosition){this->exitPoint = newExitPosition;}
        Position getExitPosition(){return this->exitPoint;}
        virtual void move() = 0;


};