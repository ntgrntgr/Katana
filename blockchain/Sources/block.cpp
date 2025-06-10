#include<iostream>
#include"../Headers/block.hpp"

Block::Block(time_t timestamp, std::string lastHash, std::string hash, std::string data) {
    setTimeStamp(timestamp);
    setLastHash(lastHash);
    setHash(hash);
    setData(data);
}

std::string Block::getHash(){
    return hash;
}

std::string Block::getLastHash(){
    return lastHash;
}

std::string Block::getData(){
    return data;
}

time_t Block::getTimeStamp(){
    return timestamp;
}

void Block::setTimeStamp(time_t bTimeStamp){
    timestamp = bTimeStamp;
}

void Block::setHash(std::string bHash){
    hash = bHash;
}

void Block::setLastHash(std::string bHash){
    lastHash = bHash;
}

void Block::setData(std::string bData){
    data = bData;
}

Block Block::genesisBlock(){
    return Block(0, "------", "f1r57-h45h", "");

}

Block Block::mineBlock(Block lastBlock, std::string data){
    time_t currentTime = time(0);
    std::string lastHash = lastBlock.getHash();
    std::string hash = "to-do-hash";
    return Block(currentTime,lastHash,hash,data);
}

void Block::toString(){
    std::cout << getTimeStamp() << std::endl
    << getLastHash() << std::endl
    << getHash() << std::endl
    << getData() << std::endl;

}