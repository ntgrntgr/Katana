build: main.o  grid.o position.o regions.o
		g++ regions.o position.o grid.o main.o -o test -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

main.o: main.cpp
		g++ -c main.cpp

grid.o: grid.cpp 
		g++ -c grid.cpp


position.o: position.cpp 
		g++ -c position.cpp

regions.o: regions.cpp
		g++ -c regions.cpp

clean:
		rm *.o	