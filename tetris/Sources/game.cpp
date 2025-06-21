#include"../Headers/game.hpp"
#include <random>
#include<iostream>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> distrib(0,5);

Game::Game(){
    setGrid(Grid());
    setBlocks(getAllBlocks());
    setCurrentBlock(getRandomBlock());
    setNextBlock(getRandomBlock());
}

Block Game::getRandomBlock(){
    if(blocks.empty() ){  
        setBlocks(getAllBlocks());
    }
    short randomIndex = distrib(gen);
    std::cout << randomIndex << std::endl;
    Block block = blocks[randomIndex];
    //blocks.erase(blocks.begin() + randomIndex);
    return block;

}

std::vector<Block> Game::getAllBlocks(){
    return {IBlock(),JBlock(),OBlock(),SBlock(),TBlock(),ZBlock()};

}


void Game::Draw(){
    grid.Draw();
    currentBlock.Draw();

}

void Game::setCurrentBlock(Block newBlock){
    this->currentBlock = newBlock;
}

void Game::setNextBlock(Block newBlock){
    this->nextBlock = newBlock;
}

Block Game::getCurrentBlock(){
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