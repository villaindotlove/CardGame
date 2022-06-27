#pragma once

namespace SceneHandler {
typedef enum GameScreen {LOGO = 0, TITLE, GAMEPLAY, ENDING} GameScreen;

GameScreen currentScreen = LOGO;

int framesCounter = 0;

void DrawScreen(int screenHeight, int screenWidth){
    switch (currentScreen)
    {
        case LOGO:
        {
            DrawText("LOGO SCREEN",20,20,40, LIGHTGRAY);
            DrawText("WAIT FOR 2 SECONDS... ", 290,220,20,GRAY);
        }break;
        case TITLE:
        {
            DrawRectangle(0,0,screenWidth,screenHeight,GREEN);
            DrawText("TITLE SCREEN",20,20,40,DARKGREEN);
            DrawText("PRESS ENTER TO JUMP TO GAMEPLAY", 120, 220, 20, DARKGREEN);
        }break;
        case GAMEPLAY:
        {
            DrawRectangle(0,0,screenWidth, screenHeight, PURPLE);
            DrawText("GAMEPLAY SCREEN", 20, 20, 40, MAROON);
            DrawText("PRESS ENTER TO JUMP TO TO ENDING", 120,220, 20, MAROON);
        }break;
        case ENDING:
        {

            DrawRectangle(0,0,screenWidth,screenHeight,BLUE);
            DrawText("ENDING SCREEN", 20,20,40,DARKBLUE);
            DrawText("PRESS ENTER TO RETURN TO TITLE", 120,220,20,DARKBLUE);
        }break;
        
        default:
            break;
    }
}

void UpdateScreenState(){
    switch(currentScreen)
    {
        case LOGO:
        {
            framesCounter++;
            if(framesCounter > 120){
                currentScreen = TITLE;
            }
        }break;
        case TITLE:
        {
        if(IsKeyPressed(KEY_ENTER)){
            currentScreen = GAMEPLAY;
        }
        }break;
        case GAMEPLAY:
        {
            if(IsKeyPressed(KEY_ENTER)){
                currentScreen = ENDING;
            }
        }break;
        case ENDING:
        {
            if(IsKeyPressed(KEY_ENTER)){
                currentScreen = TITLE;
            }
        }break;
        default: 
            break;
    }
}
}

