#pragma once

class CanBeDrawn{
    public:

    virtual void draw() = 0;
    virtual void calculatePerimeter() = 0;
    virtual void calculateArea() = 0;

    virtual ~CanBeDrawn() = default;

    
};