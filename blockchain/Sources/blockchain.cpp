#include "../Headers/block.hpp"
#include "../Headers/blockchain.hpp"
#include<iostream>

BlockChain::BlockChain(){
    BlockChain::chain.push_back(Block::genesisBlock());
}

Block BlockChain::addBlock(std::string data){
    Block newBlock = Block::mineBlock(BlockChain::chain.at(BlockChain::chain.size() -1),data);
    BlockChain::chain.push_back(newBlock);
    return newBlock;
}

void BlockChain::toString(){
    for (Block block: BlockChain::chain){
        std::cout << "Block: " << std::endl;
        block.toString();
        std::cout << "------------------------" << std::endl;
    }
}