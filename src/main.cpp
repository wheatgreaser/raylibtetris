#include <raylib.h>
#include "game.h"

double lastUpdateTime = 0;

bool EventTriggered(double interval){
    double currentTime = GetTime();
    if(currentTime - lastUpdateTime >= interval){
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main() 
{   
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300,600, "coolfuckingwindow");
    SetTargetFPS(60);

    Game game = Game();

    
    while(!WindowShouldClose()){
        if(EventTriggered(0.2)){
           game.MoveBlockDown(); 
        }
        game.HandleInput();
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();

        EndDrawing();
    }
    CloseWindow();
}