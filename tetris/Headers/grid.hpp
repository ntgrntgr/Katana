#pragma once
#include<raylib.h>
#include<vector>

class Grid{
    public:

        //Constructor
        Grid();


        //Getters and Setters
        void setRows(short numrows);
        void setColumns(short numcolumns);
        void setCellSize(short cellsize);
        short getRows();
        short getColumns();
        short getCellSize();

        void Initialize();
        void print();
        void Draw();
        
        short grid[20][10];

    private:

        
        short numRows;
        short numColumns;
        short cellSize;
        std::vector<Color> colors;
};