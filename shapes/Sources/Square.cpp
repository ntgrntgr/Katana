#include "../Headers/Square.hpp"
#include "../Headers/IsSquare.hpp"
#include <iostream>
#include <memory>

Square::Square(int newLength) {
    setLength(newLength);
    // Create drawable implementation using smart pointer
    setShapeType(std::make_unique<IsSquare>());
}

void Square::setLength(int alength) {
    length = alength;
}

int Square::getLength() {
    return length;
}


