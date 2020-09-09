#include "TaskList.h"

TaskList::TaskList() {}

TaskList::TaskList(const std::string &name) : name(name) {}

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

void TaskList::removeActivity(int pos) { //metodo che rimuove l'attività in posizione pos o lancia un eccezione se pos non è valido
    if(pos>0 && pos<=activities.size()){
        int i=0;
        for(auto it=activities.begin();it!=activities.end();it++){
            i++;
            if(i==pos) {
                activities.erase(it);
                return;
            }
        }
    }
    throw std::out_of_range("Attività non presente!");
}

int TaskList::countCompleted() {
    int count=0;
    for (auto a:activities) {
        if(a.isCompleted())
            count++;
    }
    return count;
}

int TaskList::countNotCompleted() {
    return activities.size()-countCompleted();
}





