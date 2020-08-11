#ifndef TODOLIST_TASKLIST_H
#define TODOLIST_TASKLIST_H

#include "Task.h"
#include <vector>

class TaskList {
public:
    const void printList(); //metodo per stampare tutte le attività
    void addActivity(const Task& t); //metodo per aggiungere un attività ordinata in base a data e ora


private:
    std::vector<Task> activities;
};


#endif //TODOLIST_TASKLIST_H
