#pragma once
#include "grid.hpp"
#include "../Sources/blocks.cpp"
class Game{
    private:
        std::vector<Block> blocks;
        Grid grid;
        Block currentBlock;
        Block nextBlock;
        

    public:
        Game();
        void setCurrentBlock(Block newBlock);
        void setNextBlock(Block newBlock);
        Block getCurrentBlock();
        Block getNextBlock();
        void setBlocks(std::vector<Block> newBlocks);
        void setGrid(Grid newGrid);
        Grid getGrid();
        std::vector<Block> getBlocks();
        Block getRandomBlock();
        std::vector<Block> getAllBlocks();
        void Draw();
        
        

};
