#include <raylib.h>
#include "../Headers/game.hpp"
#include<iostream>


int main(){

    Color darkBlue = {44,44,127,255};
    InitWindow(500,620, "test");
    SetTargetFPS(60);

    Game game = Game();
    
    
    while(WindowShouldClose() == false){
        game.handleInput();
        game.blockMotion(0.2);
        BeginDrawing();
        ClearBackground(BLACK);
        
        
        game.Draw();
        


        EndDrawing();

    }
    CloseWindow();

    
    
    return 0;
}