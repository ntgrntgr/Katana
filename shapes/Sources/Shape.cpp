#include "../Headers/Shape.hpp"
#include <iostream>

Shape::Shape() = default;

void Shape::tryToDraw() {
    if (shapeType) {
        shapeType->draw();
    }
}

void Shape::setShapeType(std::unique_ptr<CanBeDrawn> newShapeType) {
    shapeType = std::move(newShapeType);
}