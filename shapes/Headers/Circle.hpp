#pragma once
#include "Shape.hpp"

class Circle: public Shape {
    public:
    Circle(double radius);
    

    void setRadius(double newRadius);
    double getRadius();
    
    private:
    double radius;
};