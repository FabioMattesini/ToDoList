#include "TaskList.h"

const void TaskList::printList() {
    if(activities.empty())
        std::cout<<"LISTA VUOTA!"<<std::endl;
    else {
        for (auto a:activities)
            a.printActivity();
    }
}

void TaskList::addActivity(Task& t) { //aggiunge un'attività ordinata secondo la data nella lista
    bool check= false;
    if(activities.empty())
        activities.push_front(t);
    else
    {
        for(auto it=activities.begin();it!=activities.end();it++)
        {
            if(t.compareTime(*it)) {
                activities.insert(it, t);
                check= true;
                break;
            }
        }
        if(!check)
            activities.push_back(t);
    }

}


