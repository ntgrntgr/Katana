#pragma once
#include "grid.hpp"
#include "../Sources/blocks.cpp"
class Game{
    private:
        std::vector<Block> blocks;
        Grid grid;
        Block currentBlock;
        Block nextBlock;
        double updateTime; 
        bool gameOver;
        int score;

        bool isBlockOutside();
        void rotateBlock();
        void resetGame();

        Block getRandomBlock();
        std::vector<Block> getAllBlocks();

        void moveBlockLeft();
        void moveBlockRight();

        
        
        

    public:
        Game();
        void setCurrentBlock(Block newBlock);
        void setNextBlock(Block newBlock);
        Block& getCurrentBlock();
        Block getNextBlock();
        void setBlocks(std::vector<Block> newBlocks);
        void setGrid(Grid newGrid);
        Grid getGrid();
        double getUpdateTime();
        void setUpdateTime(double newUpdateTime);
        bool getGameOver();
        void setGameOver(bool gamestate);
        void setScore(int newScore);
        int getScore();
        void updateScore(short linesCleared, int moveDownPoints);



        
        std::vector<Block> getBlocks();
        
        
        
        void Draw();
        void handleInput();
        void moveBlockDown();
        void blockMotion(double interval);
        void lockBlock();
        bool blockFits();
        
        

};
