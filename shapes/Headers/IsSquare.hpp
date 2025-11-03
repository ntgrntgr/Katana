#pragma once
#include"CanBeDrawn.hpp"

class IsSquare: public CanBeDrawn{
    public:
    
    void draw() override;
    void calculateArea() override;
    void calculatePerimeter() override;

    virtual ~IsSquare() = default;

};