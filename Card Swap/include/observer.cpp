#include "observer.h"
#include "subject.h"
#include "events.h"
#include <vector>

class Observer 
{
    protected:
        std::vector<Subject> _subjects;
    public:
        virtual ~Observer() {
            for(int i = 0, l = _subjects.size(); i < l; i++){
                _subjects[i].RemoveObserver(this);
            }
        }
        virtual void OnNotify(EventSystem::EventType event){}

};