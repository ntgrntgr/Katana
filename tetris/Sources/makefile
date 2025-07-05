build: main.o grid.o colors.o game.o block.o blocks.o position.o
		g++ grid.o colors.o game.o block.o blocks.o position.o main.o -o test -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

main.o: main.cpp
		g++ -c main.cpp

grid.o: grid.cpp 
		g++ -c grid.cpp

colors.o: colors.cpp 
		g++ -c colors.cpp

game.o: game.cpp 
		g++ -c game.cpp	

block.o: block.cpp 
		g++ -c block.cpp

blocks.o: blocks.cpp
		g++ -c blocks.cpp

position.o: position.cpp 
		g++ -c position.cpp

clean:
		rm *.o	