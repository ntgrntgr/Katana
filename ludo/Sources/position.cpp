#include "../Headers/position.hpp"

Position::Position(){
    
}

Position::Position(short row,short column){
    setPositionRow(row);
    setPositionColumn(column);
}

void Position::setPositionColumn(short column){
    this->positionColumn = column;
}

void Position::setPositionRow(short row){
    this->positionRow = row;
}

short Position::getPositionColumn(){
    return this->positionColumn;
}

short Position::getPositionRow(){
    return this->positionRow;
}