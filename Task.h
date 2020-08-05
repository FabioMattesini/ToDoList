
#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H
#include "string"
#include "chrono"

class Task{
public:
    Task();
    explicit Task(const std::string &toDoText, bool completed= false);

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

private:
    std::string toDoText;  //testo relativo all'attività da svolgere
    bool completed;  //booleano che indica se l'attività è stata completata
};

#endif //TODOLIST_TASK_H
