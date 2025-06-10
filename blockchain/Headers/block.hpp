#pragma once
#include<ctime>
#include<string>

class Block{
    public:
        Block(time_t timestamp,std::string lastHash, std::string hash, std::string data);
        Block();
        std::string getHash();
        std::string getLastHash();
        time_t getTimeStamp();
        std::string getData();
        void setHash(std::string hash);
        void setLastHash(std::string lastHash);
        void setTimeStamp(time_t timestamp);
        void setData(std::string data);
        static Block genesisBlock(); 
        static Block mineBlock(Block lastBlock, std::string data);
        void toString();


    private:
        time_t timestamp;
        std::string lastHash;
        std::string hash;
        std::string data;

};