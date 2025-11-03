#include "../Headers/Circle.hpp"
#include "../Headers/IsACircle.hpp"
#include <iostream>
#include <memory>

Circle::Circle(double newradius) {
    setRadius(newradius);
    setShapeType(std::make_unique<IsACircle>());
}

void Circle::setRadius(double newRadius) {
    radius = newRadius;
}

double Circle::getRadius() {
    return radius;
}