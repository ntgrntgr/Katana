#include "../Headers/grid.hpp"
#include<iostream>
#include"../Headers/colors.hpp"

Grid::Grid(){
    setRows(20);
    setColumns(10);
    setCellSize(30);
    Initialize();
    colors = getCellColors();
}

short Grid::getCellSize(){
    return cellSize;
}

short Grid::getColumns(){
    return numColumns;
}

short Grid::getRows(){
    return numRows;
}

void Grid::setCellSize(short cellsize){
    cellSize = cellsize;
}

void Grid::setColumns(short columns){
    numColumns = columns;
}

void Grid::setRows(short rows){
    numRows = rows;
}

void Grid::Initialize(){
    for(short row = 0; row < numRows; row++){
        for(short column = 0; column < numColumns; column++){
            grid[row][column] = 0;
        }
    }
}

void Grid::print(){
    for(short row = 0; row < numRows; row++){
        for(short column = 0; column < numColumns; column++){
            std::cout << grid[row][column] << " ";

        }
        std::cout<< std::endl;
    }
}



void Grid::Draw(){
    for(int row = 0; row < getRows(); row++){
        for(int column = 0; column < getColumns(); column++){
            int cellValue = grid[row][column];
            DrawRectangle(column * getCellSize() + 1,row * getCellSize() + 1,getCellSize()-1,getCellSize()-1,colors[cellValue]);
        }
    }
}


