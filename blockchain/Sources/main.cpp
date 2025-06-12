#include<iostream>
#include<ctime>
#include"../Headers/block.hpp"
#include"../Headers/blockchain.hpp"

int main(){
    time_t currentTime;
    // currentTime = time(0);
    // Block myBlock(currentTime,"lastHash","hash","data");
    // myBlock.toString();

    // std::cout << "Genesis Block: " << std::endl;
    // Block::genesisBlock().toString();

    // std::cout << "Mining a new block..." << std::endl;

    // Block fooBlock = Block::mineBlock(Block::genesisBlock(),"foo data");
    // fooBlock.toString();

    // std::cout << "Mining another block..." << std::endl;

    // Block foofooBlock = Block::mineBlock(fooBlock,"second foo foo data");
    // foofooBlock.toString();

    BlockChain myChain;
    myChain.toString();
    myChain.addBlock("first block data");
    myChain.addBlock("second block data");
    myChain.addBlock("watashi wa block data");
    myChain.toString();

    return 0;
}



