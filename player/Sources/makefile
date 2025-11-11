all: player_test

player_test: player.o HUD.o SoundSystem.o Logger.o main.o
	 g++ player.o HUD.o SoundSystem.o Logger.o main.o -o test

player.o: player.cpp
	 g++ -c player.cpp -o player.o

HUD.o: HUD.cpp
	 g++ -c HUD.cpp -o HUD.o

SoundSystem.o: SoundSystem.cpp
	 g++ -c SoundSystem.cpp -o SoundSystem.o

Logger.o: Logger.cpp
	 g++ -c Logger.cpp -o Logger.o

main.o: main.cpp
	 g++ -c main.cpp -o main.o

clean:
	 rm -f *.o 
