#pragma once
#include <vector>
#include <raylib.h>

struct Card
{
    int value;
};

class Deck
{
    public: 
        Card Draw();
        Card * DrawRow();
        void Init();
    private: 
        std::vector<Card> _cards;

        void Shuffle();
};
