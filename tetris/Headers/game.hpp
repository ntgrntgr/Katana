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

        bool isBlockOutside();
        void rotateBlock();
        void resetGame();

        
        
        

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



        
        std::vector<Block> getBlocks();
        Block getRandomBlock();
        std::vector<Block> getAllBlocks();
        
        
        void Draw();
        void handleInput();
        void moveBlockLeft();
        void moveBlockRight();
        void moveBlockDown();
        void blockMotion(double interval);
        void lockBlock();
        bool blockFits();
        
        

};
