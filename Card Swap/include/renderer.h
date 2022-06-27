#pragma once
#include "raylib.h"
#include "entity.h"
#include <unordered_map>

class Renderer {
    private:
        std::unordered_map<int, Entity*> _renderQueue;
        int _currentKey = 0;

    
    public:
        int AddEntity(Entity* entity)
        {
            _renderQueue[_currentKey] = entity;
            _currentKey++;
            return _currentKey-1;
        }

        void RemoveEntity(int key)
        {
            _renderQueue.erase(key);
            return;
        }

        void DrawQueue()
        {
            for(const auto & [key, value] : _renderQueue){
                *Entity.Draw();
            }
        }
};