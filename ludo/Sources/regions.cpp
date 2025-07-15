#include "../Headers/region.hpp"
#include<iostream>

class ARegion: public Region{
    public: 
        ARegion(){
            setGrid(Grid(3,6));
            setStartingPosition(Position(0,1));
            setEndingPosition(Position(0,5));
            setEntryPoint(Position(2,5));
            setExitPosition(Position(1,0));

        };
        void move()override{
            std::cout << "ARegion" << std::endl;
        }

};

class BRegion: public Region{
    public:
        BRegion(){
            setGrid(Grid(6,3));
            setStartingPosition(Position(1,2));
            setEndingPosition(Position(5,2));
            setEntryPoint(Position(5,0));
            setExitPosition(Position(0,1)); 
        }
        void move(){
            std::cout << "BRegion" << std::endl;
        }

};

class CRegion: public Region{
    public:
        CRegion(){
            setGrid(Grid(3,6));
            setStartingPosition(Position(2,4));
            setEndingPosition(Position(2,0));
            setEntryPoint(Position(0,0));
            setExitPosition(Position(1,5));
        }
        void move(){
            std::cout << "CRegion" << std::endl;
        }

};

class DRegion: public Region{
    public:
        DRegion(){
            setGrid(Grid(6,3));
            setStartingPosition(Position(4,0));
            setEndingPosition(Position(0,0));
            setEntryPoint(Position(0,2));
            setExitPosition(Position(5,1));
        }
        void move(){
            std::cout << "DRegion" << std::endl;
        }

};