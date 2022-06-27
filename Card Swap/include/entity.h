#pragma once
#include "raylib.h"
#include <string>

class Entity{
    public:
        Entity(float posX = 0, float posY = 0, std::string name = "Entity");
        ~Entity();

        virtual void Draw();

        Vector2 GetPosition();
        void SetPosition(float posX, float posY);

        std::string GetName();
        void SetName(std::string name);

    protected:
        float _posX;
        float _posY;
        Vector2 _scale;

        std::string _name;

        int objectID;
};