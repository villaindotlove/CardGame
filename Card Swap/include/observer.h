class Subject;
namespace EventSystem{
    enum EventType : int;
}

class Observer 
{
    public:
        virtual ~Observer();
        virtual void OnNotify(EventSystem::EventType event);
    protected:
        std::vector<Subject> _subjects;
};

