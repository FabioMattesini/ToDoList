
#include "Task.h"

Task::Task():completed(false) {}

Task::Task(const std::string &toDoText, bool completed) : toDoText(toDoText), completed(completed) {}


