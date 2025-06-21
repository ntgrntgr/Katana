#pragma once
#include<vector>
#include<map>
#include "../Headers/position.hpp"
#include"../Headers/colors.hpp"


class Block{
    public:

        Block();
        short id;
        std::map<short, std::vector<Position>> cells;
        void setCellSize(short cellsize);
        void setRotationState(short rotationstate);
        void setColors(std::vector<Color> color);
        std::vector<Color> getBlockColor();
        short getCellSize();
        short getRotationState();

        short getRowOffset();
        short getColumnOffset();
        void setRowOffset(short offset);
        void setColumnOffset(short offset);

        void Draw();
        void Move(short rows,short columns);
        std::vector<Position> getCellPositions();
        
        

    private:
        short cellSize;
        short rotationState;
        std::vector<Color> colors;
        short rowOffSet;
        short columnOffset;
};