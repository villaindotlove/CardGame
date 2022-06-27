#pragma once
#include "deckhandler.h"
#include "deck.h"
#include "events.h"
#include "observer.h"


class DeckHandler : Observer{
    public:
        virtual void OnNotify(EventSystem::EventType event){
            switch(event)
                {
                case EventSystem::ENDTURN:
                {
                    
                }break;
                default: break;
                }
        }
};