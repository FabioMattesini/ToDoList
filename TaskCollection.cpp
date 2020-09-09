#include "TaskCollection.h"

void TaskCollection::addTaskList(TaskList tl) {
    collection.push_back(tl);
}

void TaskCollection::removeTaskList(int pos) {
    if(pos>0 && pos<=collection.size()){
        int i=0;
        for(auto it=collection.begin();it!=collection.end();it++){
            i++;
            if(i==pos){
                collection.erase(it);
                return;
            }
        }
    }
    throw std::out_of_range("Lista di attività non presente!");
}

int TaskCollection::countAllCompleted() const{
    int count=0;
    for(auto c:collection){
        count+=c.countCompleted();
    }
    return count;
}

int TaskCollection::countAllNotCompleted() const {
    int count=0;
    for(auto c:collection){
        count+=c.countNotCompleted();
    }
    return count;
}
