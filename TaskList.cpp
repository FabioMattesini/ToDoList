#include "TaskList.h"

const void TaskList::printList() {
    for(auto a:activities)
        a.printActivity();
}

void TaskList::addActivity(const Task& t) {
    if(activities.empty())
        activities.push_back(t);
    else{
        //if(activities.size()==1) correggere l'inserimento quando è presente un solo elemento
        for(auto it=activities.begin();it!=activities.end();it++){
            if(it->getTaskDate()<t.getTaskDate())
                activities.insert(it+1,t);
            else if(it->getTaskDate()>t.getTaskDate())
                activities.insert(it-1,t);
            else if(it->getTaskDate()==t.getTaskDate()){
                if(it->compareTime(t))
                    activities.insert(it+1,t);
                else
                    activities.insert(it-1,t);
            }
        }
    }
}


