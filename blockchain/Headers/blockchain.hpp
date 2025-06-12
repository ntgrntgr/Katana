#pragma once
#include<vector>
#include"../Headers/block.hpp"

class BlockChain{
    public:
        BlockChain();
        Block addBlock(std::string data);
        void toString();


    private:
        std::vector<Block> chain;

};