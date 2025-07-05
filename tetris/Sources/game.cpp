#include"../Headers/game.hpp"
#include <random>
#include<iostream>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> distrib(0,6);

Game::Game(){
    setGrid(Grid());
    setBlocks(getAllBlocks());
    setCurrentBlock(getRandomBlock());
    setNextBlock(getRandomBlock());
    setUpdateTime(0);
    setGameOver(false);
}

bool Game::isBlockOutside(){
    std::vector<Position> tiles = getCurrentBlock().getCellPositions();
    for(Position item:tiles){
        if(grid.isCellOutside(item.getPositionRow(),item.getPositionColumn())){
            return true;
        }
    }
    return false;
}

Block Game::getRandomBlock(){
    if(blocks.empty() ){  
        setBlocks(getAllBlocks());
    }
    short randomIndex = distrib(gen);
    Block block = blocks[randomIndex];
    //blocks.erase(blocks.begin() + randomIndex);
    return block;

}

std::vector<Block> Game::getAllBlocks(){
    return {LBlock(),IBlock(),JBlock(),OBlock(),SBlock(),TBlock(),ZBlock()};

}

void Game::blockMotion(double interval){
    double currentTime = GetTime();
    if(currentTime - getUpdateTime() >= interval){
        setUpdateTime(currentTime);
        moveBlockDown();
    }
    //return false;
}

void Game::lockBlock(){
    std::vector<Position> tiles = getCurrentBlock().getCellPositions();
    for(Position item: tiles){
        grid.grid[item.getPositionRow()][item.getPositionColumn()] = getCurrentBlock().id;
    }
    setCurrentBlock(getNextBlock());
    if(blockFits() == false){
        setGameOver(true);

    }
    setNextBlock(getRandomBlock());
    //updateScore(0,1);
    updateScore(grid.clearFullRows(),1);
}



void Game::handleInput(){
    int keyPressed = GetKeyPressed();
    if(getGameOver() && keyPressed != 0){
        setGameOver(false);
        resetGame();
    }
    
    switch(keyPressed){
        case 263:
        moveBlockLeft();
        break;

        case 262:
        moveBlockRight();
        break;

        case 264:
        moveBlockDown();
        break;

        case 265:
        rotateBlock();
        break;

        
    }
}

void Game::moveBlockLeft(){
    if(!getGameOver()){
        getCurrentBlock().Move(0,-1);
         if(isBlockOutside() || blockFits() == false){
        getCurrentBlock().Move(0,1);
    }
}
    }
    

void Game::moveBlockRight(){
    if(!getGameOver()){
            getCurrentBlock().Move(0,1);
    if(isBlockOutside() || blockFits() == false){
        getCurrentBlock().Move(0,-1);
    }

    }
    
}

void Game::moveBlockDown(){
    if(!getGameOver()){
            getCurrentBlock().Move(1,0);
    if(isBlockOutside() || blockFits() == false){
        getCurrentBlock().Move(-1,0);
        lockBlock();
    }
    }
    
}

void Game::rotateBlock(){
    if(!getGameOver()){
                getCurrentBlock().rotate();
    if(isBlockOutside() || blockFits() == false){
        getCurrentBlock().undoRotation();
        
    }

    }
    
}

bool Game::blockFits(){
    std::vector<Position> tiles = getCurrentBlock().getCellPositions();
    for(Position item: tiles){
        if(grid.isCellEmpty(item.getPositionRow(), item.getPositionColumn()) == false){
            return false;
        }
    }
    return true;
}

void Game::resetGame(){
    grid.Initialize();
    setBlocks(getAllBlocks());
    setCurrentBlock(getRandomBlock());
    setNextBlock(getRandomBlock());
    setScore(0);

}



void Game::Draw(){
    grid.Draw();
    getCurrentBlock().Draw(10,10);
    getNextBlock().Draw(270,270);

}

void Game::setCurrentBlock(Block newBlock){
    this->currentBlock = newBlock;
}

void Game::setNextBlock(Block newBlock){
    this->nextBlock = newBlock;
}

Block& Game::getCurrentBlock(){
    return this->currentBlock;
}

Block Game::getNextBlock(){
    return this->nextBlock;

}

void Game::setBlocks(std::vector<Block> newBlocks){
    this->blocks = newBlocks;

}

void Game::setGrid(Grid newGrid){
    this->grid = newGrid;

}

void Game::setUpdateTime(double newUpdateTime){
    this->updateTime = newUpdateTime;
}

double Game::getUpdateTime(){
    return this->updateTime;
}

void Game::setGameOver(bool gamestatus){
    this->gameOver = gamestatus;
}



bool Game::getGameOver(){
    return this->gameOver;
}

void Game::setScore(int newScore){
    this->score = newScore;
}

int Game::getScore(){
    return this->score;
}

void Game::updateScore(short linesCleared, int movedDownPoints){
    // if(linesCleared > 0) {
    //     setScore(getScore() + 10);
    //     linesCleared--;
    //     updateScore(linesCleared,0);
    // }
    // setScore(getScore() + movedDownPoints);
    for(short line = 0; line < linesCleared; line ++){
        setScore(getScore() + 10);
    }
    setScore(getScore() + movedDownPoints);


}