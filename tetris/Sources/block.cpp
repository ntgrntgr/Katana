#include"../Headers/block.hpp"
Block::Block(){
    setCellSize(30);
    setRotationState(0);
    setColors(getCellColors());
    setRowOffset(0);
    setColumnOffset(0);
    
}

void Block::Move(short rows, short columns){
    setRowOffset(getRowOffset() + rows);
    setColumnOffset(getColumnOffset() + columns);
}

std::vector<Position> Block::getCellPositions(){
    std::vector<Position> tiles = cells[getRotationState()];
    std::vector<Position> movedTiles; 

    for(Position item: tiles){
        Position newPosition = Position(item.getPositionRow() + getRowOffset(), item.getPositionColumn() + getColumnOffset());
        movedTiles.push_back(newPosition);
    }
    return movedTiles;
}

void Block::rotate(){
    setRotationState(getRotationState() + 1);
    if(getRotationState() == (int)cells.size()){
        setRotationState(0);
    }
}

void Block::undoRotation(){
    setRotationState(getRotationState() -1);
    if(getRotationState() == -1 ){
        setRotationState((int)cells.size() - 1);
    }
}



void Block::Draw(short offsetX, short offsetY){
    std::vector<Position> tiles = getCellPositions();
    for(Position item:tiles){
        DrawRectangle(item.getPositionColumn() * getCellSize() + offsetX,item.getPositionRow() * getCellSize() + offsetY,getCellSize() - 1,getCellSize() - 1, colors[id]);
    }
}

void Block::setCellSize(short cellsize){
    this-> cellSize = cellsize;
}

short Block::getCellSize(){
    return this-> cellSize;
}

void Block::setRotationState(short rotationstate){
    this->rotationState = rotationstate;
}

short Block::getRotationState(){
    return this->rotationState;
}

void Block::setColors(std::vector<Color> colorss){
    this->colors = colorss;
}

short Block::getRowOffset(){
    return this->rowOffSet;

}

short Block::getColumnOffset(){
    return this->columnOffset;

}

void Block::setRowOffset(short offset){
    this->rowOffSet = offset;
}

void Block::setColumnOffset(short offset){
    this->columnOffset = offset;
}