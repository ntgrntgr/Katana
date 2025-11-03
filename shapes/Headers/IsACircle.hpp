#pragma once
#include"CanBeDrawn.hpp"

class IsACircle: public CanBeDrawn{

    public:
    
    void draw() override;
    void calculateArea() override;
    void calculatePerimeter() override;

    virtual ~IsACircle() = default;


};