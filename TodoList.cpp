//
// Created by paefarinov on 19.11.2021.
//

#include "TodoList.h"

using namespace std;

bool TodoList::addTask(Task task) {

    bool shouldAddTask = true;

    for (auto storedTask:tasks) {
        if (storedTask.getName() == task.getName()) {
            shouldAddTask = false;
        }
    }

    if (shouldAddTask) {
        tasks.push_back(task);
    }
    return shouldAddTask;
}

void TodoList::completeTask(Task task) {
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].getName() == task.getName()) {
            tasks[i].complete();
        }
    }
}

vector<Task> TodoList::activeTasks() {
    vector<Task> activeTasks;
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].getStatus() == ACTIVE) {
            activeTasks.push_back(tasks[i]);
        }
    }
    return activeTasks;
}


vector<Task> TodoList::resolvedTasks() {
    vector<Task> activeTasks;
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].getStatus() == RESOLVED) {
            activeTasks.push_back(tasks[i]);
        }
    }
    return activeTasks;
}

Task TodoList::operator[](int index) {
    return tasks[index];
}
