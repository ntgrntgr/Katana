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

bool Grid::isCellOutside(short row, short column){
    if(row >= 0 && row < getRows() && column >= 0 && column < getColumns()){
        return false;
    }
    return true;
    
}

bool Grid::isCellEmpty(short row, short column){
    if(grid[row][column] == 0){
        return true;
    }
    return false;
}

bool Grid::isRowFull(short row){
    for(short column = 0; column < getColumns() ; column++){

        if(grid[row][column] == 0){
            return false;
        }

    }
    return true;
}

void Grid::clearRow(short row){
    for(short column = 0; column < getColumns(); column++){
        grid[row][column] = 0;
    }
}

void Grid::moveRowDown(short row, short numRow){
    for(short column = 0; column < getColumns(); column++){
        grid[row + numRow][column] = grid[row][column];
        grid[row][column] = 0;
    }
}

short Grid::clearFullRows(){
    short completedRows = 0;
    for(short row = getRows()-1 ; row >=0 ; row--){
        if(isRowFull(row)){
            clearRow(row);
            completedRows++;
        }
        else if(completedRows > 0){
            moveRowDown(row, completedRows);
        }
    }
    return completedRows;
}

short Grid::getColumns()
{
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


