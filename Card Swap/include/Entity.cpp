#include "entity.h"

class Entity{
    protected:
        float _posX;
        float _posY;
        Vector2 _scale;
        std::string _name;
        int objectID;
    public:
        Entity(float posX = 0, float posY = 0, std::string name = "Entity") :
            _posX(posX),
            _posY(posY),
            _scale({1,1}),
            _name(name)
            {}
        ~Entity()
        {

        }
        virtual void Draw(){}

        Vector2 GetPosition()
        {
            Vector2 output = {_posX, _posY};
            return output;
        }
        void SetPosition(float posX, float posY)
        {
            _posX = posX;
            _posY = _posY;
            return;
        }

        std::string GetName()
        {
            return _name;
        }
        void SetName(std::string name)
        {
            _name = name;
        }

};