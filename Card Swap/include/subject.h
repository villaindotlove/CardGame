class Observer;
namespace EventSystem{
    enum EventType : int;
}

class Subject
{
    public:
        void AddObserver(Observer* observer);
        void RemoveObserver(Observer* observer);
        void Notify(EventSystem::EventType event);    

    private:
        const static int _maxObservers = 2;
        Observer* _observers[_maxObservers];
        int _numObservers;
};