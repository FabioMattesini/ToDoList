#include "TaskDisplayer.h"

void TaskDisplayer::displayTask(Task t) {
    std::cout<<"Attività:"<<t.getToDoText()<<" Data:"<<t.getTaskDate().day()<<"/"<<t.getTaskDate().month()<<"/"<<t.getTaskDate().year();
    std::cout<<" Ore: "<<t.getHour()<<":"<<t.getMinute();
    if(t.isCompleted())
        std::cout<<" -Completata"<<std::endl;
    else
        std::cout<<" -Da completare"<<std::endl;
}

void TaskDisplayer::displayTask(TaskList l) {
    std::cout<<"Lista: "<<l.getName()<<std::endl;
    if(l.getActivities().empty())
        std::cout<<"LISTA VUOTA!"<<std::endl;
    else {
        for (auto a:l.getActivities())
            displayTask(a);
    }
}

void TaskDisplayer::displayTask(TaskCollection t) {
    if(t.getCollection().empty())
        std::cout<<"NESSUNA LISTA DI ATTIVITÀ AGGIUNTA!"<<std::endl;
    else{
        for(auto c:t.getCollection())
            displayTask(c);
    }
}
