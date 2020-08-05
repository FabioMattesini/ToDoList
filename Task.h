
#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H
#include <string>
#include <chrono>
#include "date.h"

class Task{
public:
    Task();
    //aggiungere costruttore senza data
    explicit Task(const std::string &toDoText,int day=1,int month=1,int year=2020, bool completed= false);

    const std::string &getToDoText() const {
        return toDoText;
    }

    void setToDoText(const std::string &toDoText) {
        Task::toDoText = toDoText;
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

    void setTaskDate(const date::year_month_day &taskDate) {// modificare mettendo come paremetri giorno mese e anno
        Task::taskDate = taskDate;
    }

private:
    std::string toDoText;  //testo relativo all'attività da svolgere
    bool completed;  //booleano che indica se l'attività è stata completata
    date::year_month_day taskDate;  //data in formato anno/mese/giorno
};

#endif //TODOLIST_TASK_H
