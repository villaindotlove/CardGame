#pragma once
#include "events.h"
#include "Entity.h"
#include <raylib.h>

class UIButton : Subject, Entity{
    protected:
        float _width;
        float _height;
        const char* _text;
        float _fontSize;
        Font _font;
        EventSystem::EventType _triggeredEvent;
        
        Color _colour;
        Color _textColour;

    public:
        void ButtonPress(){
            Notify(_triggeredEvent);
        }
        void SetDimensions(float width, float height){
            _width = width;
            _height = height;
        }
        void SetColor(Color colour){
            _colour = colour;
        }
        void Draw(){
            DrawRectangle(_posX, _posY, _width, _height, _colour);
            DrawText(_text, _posX, _posY, 24, _textColour);
        }
        UIButton(float posX = 0, float posY = 0, float width = 120, float height = 30) : 
        Entity(posX, posY),
        _width(width),
        _height(height),
        _text{"BUTTON"},
        _fontSize{24.0f},
        _colour(BLUE),
        _textColour(WHITE)
        {    
            _font = LoadFont("resources/fonts/pixelplay.png");
        }
        UIButton(float posX = 0, float posY = 0, const char* text = "BUTTON", float fontSize = 24, float width = 120, float height = 30) :
        Entity(posX, posY),
        _width(width),
        _height(height),
        _text{text},
        _fontSize(fontSize),
        _colour(BLUE),
        _textColour(WHITE)
        {
            _font = LoadFont("resources/fonts/pixelplay.png");
        }

};