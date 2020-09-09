#ifndef TODOLIST_TASKCOLLECTION_H
#define TODOLIST_TASKCOLLECTION_H
#include "TaskList.h"

class TaskCollection{
public:
    void addTaskList(TaskList tl);
    void removeTaskList(int pos);
    int countAllCompleted() const; //metodo che restituisce il numero di tutte le attività completate
    int countAllNotCompleted() const; //metodo che restituisce il numero di tutte le attività non completate

    const std::list<TaskList> &getCollection() const {
        return collection;
    }

private:
    std::list<TaskList> collection;
};

#endif //TODOLIST_TASKCOLLECTION_H
