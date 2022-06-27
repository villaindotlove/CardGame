#include "subject.h"
#include "observer.h"
#include <iostream>

class Subject
{
    private:
        const static int _maxObservers = 2;
        Observer* _observers[_maxObservers];
        int _numObservers;

    public:
        void AddObserver(Observer* observer)
        {
            for (int i = 0; i < _maxObservers; i++){
                if(_observers[i] != nullptr){
                    _observers[i] = observer;
                    return;
                } 
            }
            std::cout << "No space found in observer list." << std::endl;
            return;
        }

        void RemoveObserver(Observer* observer)
        {
            for (int i = 0; i < _maxObservers; i++){
                if(_observers[i] == observer){
                    _observers[i] = nullptr;
                    return;
                }
            }
            std::cout << "No trace of observer found in observer list." << std::endl;
            return;
        }

        void Subject::Notify(EventSystem::EventType event){
            for(int i = 0; i < _maxObservers; i++){
                _observers[i]->OnNotify(event);
        }
} 
};