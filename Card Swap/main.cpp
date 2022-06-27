#include "raylib.h"
#include "events.h"
#include "sceneHandler.h"
#include "deckHandler.h"
#include "inputHandler.h"
#include "deck.h"


int main(void){

    Deck deck = Deck();
    deck.Init();
    //Card* pile = deck.DrawRow();

    //UIButton button = UIButton(120, 30, 200, 200);


    // Render and Game Loop
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib basic window");
    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        //button.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
    // {    
    //     ScreenHandler::UpdateScreenState();

    //         ClearBackground(RAYWHITE);
    //         ScreenHandler::DrawScreen(screenHeight, screenWidth);
    // }

    // CloseWindow();

    // return 0;
}