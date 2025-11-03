#include "../Headers/Square.hpp"
#include "../Headers/Circle.hpp"

int main(){
    Circle myCircle = Circle(3.0);
    myCircle.tryToDraw();

    Square mySquare = Square(2);
    mySquare.tryToDraw();
}