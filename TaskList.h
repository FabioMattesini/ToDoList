#ifndef TODOLIST_TASKLIST_H
#define TODOLIST_TASKLIST_H

#include "Task.h"
#include <list>

class TaskList {
public:
    void addActivity(Task& t); //metodo per aggiungere un attività ordinata in base a data e ora
    void removeActivity(int pos);

    const std::list<Task> &getActivities() const {
        return activities;
    }
    //\b(todo) aggiungere metodo per contare le attività completate


private:
    std::list<Task> activities;
};


#endif //TODOLIST_TASKLIST_H
