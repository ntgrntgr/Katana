#pragma once
#include "Shape.hpp"

class Square: public Shape{
    public:
    Square(int aLength);
    

    void setLength(int newLength);
    int getLength();

    private:
    int length;

};