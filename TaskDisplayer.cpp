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
    if(l.getActivities().empty())
        std::cout<<"LISTA VUOTA!"<<std::endl;
    else {
        for (auto a:l.getActivities())
            displayTask(a);
    }
}
