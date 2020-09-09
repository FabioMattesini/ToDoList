#ifndef TODOLIST_TASKDISPLAYER_H
#define TODOLIST_TASKDISPLAYER_H

#include "TaskCollection.h"

//classe per gestire la rappresentazione grafica delle task
class TaskDisplayer{
public:
    void displayTask(Task t);
    void displayTask(TaskList t);
    void displayTask(TaskCollection t);
};


#endif //TODOLIST_TASKDISPLAYER_H
