#ifndef TODOLIST_TASKLIST_H
#define TODOLIST_TASKLIST_H

#include "Task.h"
#include <list>

class TaskList {
public:
    TaskList();
    TaskList(const std::string &name);

    void addActivity(Task& t); //metodo per aggiungere un attività ordinata in base a data e ora
    void removeActivity(int pos); //metodo per rimuovere la task in posizione pos
    int countCompleted();
    int countNotCompleted();

    const std::list<Task> &getActivities() const {
        return activities;
    }

private:
    std::string name;
    std::list<Task> activities;
};


#endif //TODOLIST_TASKLIST_H
