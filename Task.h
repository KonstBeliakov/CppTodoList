//
// Created by paefarinov on 19.11.2021.
//

#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H

#include<string>
#include <ctime>
#include "TaskStatus.h"

using namespace std;

class Task {
public:
    int hard = 0;
    void setName(string name);
    string getName();
    void setDescription(string desc);
    string getDescription();
    TaskStatus getStatus();
    string display();
    void complete();

    Task();
    Task(string name, string description);


private:
    string name;
    string description;
    time_t creationTime;
    TaskStatus status = ACTIVE;
};

#endif //UNTITLED_TASK_H
