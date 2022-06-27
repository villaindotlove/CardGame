#pragma once
#include "deck.h"

class Deck
{
    private: std::vector<Card> _cards;

    public: 
        Card Draw()
        {
            auto it = _cards.begin();
            Card output = *it;
            _cards.erase(it);
            return output;
        }

        Card * DrawRow()
        {
            static Card output[3];
            for(int i = 0, l = 3; i<l; i++){
                output[i] = Draw();
            }
            return output;
        }

        void Init()
        {
            //populate deck with ints 1-9
            for(int i = 0, l = 9; i < l; i++){
                _cards.push_back(Card{i});
            }
            Shuffle();
        }

    private: 
        void Shuffle()
        {
            std::vector<int> drawOrder{};
            std::vector<int> drawPool{};
            int l = _cards.size();

            for(int i = 0; i < l; i++){
                drawPool.push_back(i);
            }
                
            //Choose random cards for draw queue
            for(int i = 0; i<l; i++){
                int offset = GetRandomValue(0,drawPool.size()-1);
                auto elem = std::next(drawPool.begin(), offset);
                drawOrder.push_back(*elem);
                drawPool.erase(elem);
            }

            //reorganise _cards to reflect draw queue
            std::vector<Card> newCards{};
            for (int i = 0; i<l; i++){
                int index = drawOrder[i];
                newCards.push_back(_cards[index]);
            }
            _cards = newCards;
            
        }
};
