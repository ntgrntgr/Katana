#pragma once
#include<raylib.h>
#include<vector>

class Grid{
    public:

        //Constructor
        Grid();
        Grid(short numRows, short numColumns);
         


        //Getters and Setters
        void setRows(short numrows);
        void setColumns(short numcolumns);
        void setCellSize(short cellsize);
        short getRows();
        short getColumns();
        short getCellSize();

        bool isCellOutside(short row, short column);
        bool isCellEmpty(short row, short column);

        void Initialize();
        void print();
        void Draw();
        short clearFullRows();
        
        short grid[20][10];

    private:

        bool isRowFull(short row);
        void clearRow(short row);
        void moveRowDown(short row, short numRows);
        

        
        short numRows;
        short numColumns;
        short cellSize;
        std::vector<Color> colors;
};