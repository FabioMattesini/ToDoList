
#include "Task.h"

Task::Task():completed(false) {}

Task::Task(const std::string &toDoText, int day, int month, int year,int hour,int minute, bool completed):toDoText(toDoText),completed
(completed),taskDate(date::day(day)/month/year),hour(hour),minute(minute){}

const void Task::printActivity() {
    std::cout<<"Attività:"<<toDoText<<" Data:"<<taskDate.day()<<"/"<<taskDate.month()<<"/"<<taskDate.year();
    std::cout<<" Ore: "<<hour<<":"<<minute;
    if(completed)
        std::cout<<" -Completata"<<std::endl;
    else
        std::cout<<" -Da completare"<<std::endl;
}

const bool Task::compareTime(const Task &t){
    if(this->hour<t.hour)
        return true;
    if(this->hour>t.hour)
        return false;

    if (this->hour==t.hour){
        if(this->minute<t.minute)
            return true;
        else
            return false;
    }
}







