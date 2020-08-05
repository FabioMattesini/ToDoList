
#include "Task.h"

Task::Task():completed(false) {}

Task::Task(const std::string &toDoText, int day, int month, int year, bool completed):toDoText(toDoText),completed(completed),
taskDate(date::day(day)/month/year){}







