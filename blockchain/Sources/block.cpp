#include<iostream>
#include<openssl/evp.h>
#include"../Headers/block.hpp"
#include <iomanip>

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
    std::string hash = Block::hashFunction(currentTime, lastHash, data);
    return Block(currentTime,lastHash,hash,data);
}

std::string Block::sha256(const std::string& str){
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    const EVP_MD* md = EVP_sha256();
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int lengthOfHash = 0;

    EVP_DigestInit_ex(ctx, md, nullptr);
    EVP_DigestUpdate(ctx, str.c_str(), str.size());
    EVP_DigestFinal_ex(ctx, hash, &lengthOfHash);
    EVP_MD_CTX_free(ctx);

    std::stringstream ss;
    for(int i = 0; i < lengthOfHash; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return ss.str();
}

std::string Block::hashFunction(time_t timestamp, std::string lasthash, std::string data){
    
    return sha256( std::to_string(timestamp) + lasthash + data);
}

void Block::toString(){
    std::cout << getTimeStamp() << std::endl
    << getLastHash() << std::endl
    << getHash() << std::endl
    << getData() << std::endl;

}