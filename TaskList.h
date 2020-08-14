#ifndef TODOLIST_TASKLIST_H
#define TODOLIST_TASKLIST_H

#include "Task.h"
#include <list>

class TaskList {
public:
    const void printList(); //metodo per stampare tutte le attività
    void addActivity(Task& t); //metodo per aggiungere un attività ordinata in base a data e ora
    // \b(todo) Crea funzione per la rimozione delle attività


private:
    std::list<Task> activities;
};


#endif //TODOLIST_TASKLIST_H
