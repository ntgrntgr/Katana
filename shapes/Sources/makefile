build: main.o Circle.o Shape.o Square.o IsACircle.o IsSquare.o 
		g++ main.o -o test  Circle.o Shape.o Square.o IsACircle.o IsSquare.o

Circle.o: Circle.cpp
		g++ -c Circle.cpp 

Shape.o: Shape.cpp
		g++ -c Shape.cpp

main.o: main.cpp
		g++ -c main.cpp	

Square.o: Square.cpp
		g++ -c Square.cpp	

IsCircle.o: IsCircle.cpp
		g++ -c IsCircle.cpp			

IsSquare.o: IsSquare.cpp
		g++ -c IsSquare.cpp

clean: 
		rm *.o			