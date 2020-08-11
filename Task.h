
#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H
#include <iostream>
#include <chrono>
#include "date.h"

class Task{
public:
    Task();
    explicit Task(const std::string &toDoText,int day=1,int month=1,int year=2020,int hour=0,int minute=0,bool completed= false);

    const std::string &getToDoText() const {
        return toDoText;
    }

    bool isCompleted() const {
        return completed;
    }

    void setCompleted(bool completed) {
        Task::completed = completed;
    }

    const date::year_month_day &getTaskDate() const {
        return taskDate;
    }

    const bool compareTime(const Task &t);

    const void printActivity();

private:
    std::string toDoText;  //testo relativo all'attività da svolgere
    bool completed;  //booleano che indica se l'attività è stata completata
    date::year_month_day taskDate;  //data in formato anno/mese/giorno
    int hour;
    int minute;
};

#endif //TODOLIST_TASK_H
