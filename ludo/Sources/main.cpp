#include<raylib.h>
#include"../Headers/grid.hpp"
#include"regions.cpp"
#include<iostream>


int main(){

    
    ARegion newRegion; 
    BRegion newBregion;
    CRegion newCRegion;
    DRegion newDRegion;
    newRegion.getGrid().print();
    newBregion.getGrid().print();
    newCRegion.getGrid().print();
    newDRegion.getGrid().print();
    

    
    InitWindow(750,700, "ludo");
    SetTargetFPS(60);
    while(WindowShouldClose() == false){
        
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();

    }
    CloseWindow();

    
    
    return 0;
}