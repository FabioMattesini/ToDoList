
#include "Task.h"

Task::Task():completed(false){}

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

bool Task::compareTime(Task &t){ //restituisce true se la data di this è minore di t

    if (this->taskDate < t.taskDate)
        return true;
    if (this->taskDate == t.taskDate) {
        if (this->hour < t.hour)
            return true;
        if (this->hour == t.hour) {
            if (this->minute < t.minute)
                return true;
            else
                return false;
        }
        else return false;
    }
    else
        return false;
}






