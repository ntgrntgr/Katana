#include <raylib.h>
#include "../Headers/game.hpp"
#include "../Headers/colors.hpp"
#include<iostream>


int main(){

    
    InitWindow(500,620, "test");
    SetTargetFPS(60);

    Font font = LoadFontEx("../Resources/Fonts/roboto.ttf",70,0,0);

    Game game = Game();
    
    
    while(WindowShouldClose() == false){
        game.handleInput();
        game.blockMotion(1);
        BeginDrawing();
        ClearBackground(darkBlue);
        DrawTextEx(font, "Score", {360,15}, 38, 2, WHITE);
        DrawTextEx(font, "Next", {370,175}, 38, 2, WHITE);
        if(game.getGameOver()){
            DrawTextEx(font, "GAME OVER", {320,450}, 30, 2, WHITE);
        }

        
        DrawRectangleRounded({320,55,170,60},0.3,6,lightBlue);

        char scoreText[10];
        sprintf(scoreText, "%d", game.getScore());
        Vector2 textSize = MeasureTextEx(font, scoreText, 38,2);

        DrawTextEx(font, scoreText, {300 + (185 - textSize.x)/2,65}, 38, 2, WHITE);
        DrawRectangleRounded({320,215,170,180},0.3,6,lightBlue);
        
        game.Draw();
        


        EndDrawing();

    }
    CloseWindow();

    
    
    return 0;
}