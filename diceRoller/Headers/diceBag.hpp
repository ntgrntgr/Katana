#pragma once
#include<vector>
#include"dice.hpp"

class DiceBag{
    public:
        DiceBag();
        DiceBag(short dNumberOfDice, short dNumberOfFaces);
        void roll();
        void addDiceToBag(Dice dice);
        void emptyDiceBag();
        void setNumberOfDice(short dNumberOfDice);
        short getNumberOfDice();
        short getTotalRolled();
        void setTotalRolled(short sTotalRolled);

    private:
        short numberOfDice;
        short totalRoled;
        std::vector<Dice> diceInBag;
};