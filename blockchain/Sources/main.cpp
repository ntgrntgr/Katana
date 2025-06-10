#include<iostream>
#include<ctime>
#include"../Headers/block.hpp"

int main(){
    time_t currentTime;
    currentTime = time(0);
    Block myBlock(currentTime,"lastHash","hash","data");
    myBlock.toString();

    std::cout << "Genesis Block: " << std::endl;
    Block::genesisBlock().toString();

    std::cout << "Mining a new block..." << std::endl;

    Block fooBlock = Block::mineBlock(Block::genesisBlock(),"foo data");
    fooBlock.toString();

    return 0;
}

