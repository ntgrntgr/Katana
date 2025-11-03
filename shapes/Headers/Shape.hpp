#pragma once
#include"CanBeDrawn.hpp"
#include <memory>

class Shape {
    public:
    Shape();
    ~Shape() = default; // unique_ptr handles cleanup
    
    void tryToDraw();
    void setShapeType(std::unique_ptr<CanBeDrawn> newShapeType);
    
    protected:
    std::unique_ptr<CanBeDrawn> shapeType;
    double perimeter;
    double area;
};