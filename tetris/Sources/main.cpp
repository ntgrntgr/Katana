#include <raylib.h>
#include "../Headers/game.hpp"


int main(){

    Color darkBlue = {44,44,127,255};
    InitWindow(300,600, "test");
    SetTargetFPS(60);

    Game game = Game();
    
    
    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(BLACK);

        game.Draw();
        


        EndDrawing();

    }
    CloseWindow();
    
    return 0;
}