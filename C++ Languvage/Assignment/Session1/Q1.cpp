/*1.Write a simple C program tasklist_c.c that allows you to add up to 5 tasks 
(as strings) to a global array and print all tasks using a for loop.*/


#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 5;
string tasks[MAX_TASKS];
int taskCount = 0;

void addTask(const string& task) {
    if (taskCount < MAX_TASKS) {
        tasks[taskCount] = task;
        taskCount++;
        cout << "Added task: " << task << endl;
    } else {
        cout << "Cannot add \"" << task << "\" - Task list is full!" << endl;
    }
}

void printTasks() {
    cout << "\n--- Current Tasks ---" << endl;
    
    for (int i = 0; i < taskCount; i++) {
        cout << (i + 1) << ". " << tasks[i] << endl;
    }
}

int main() {

    addTask("Buy groceries");
    addTask("Complete assignment");
    addTask("Go to the gym");
    addTask("Read a book");
    addTask("Call Mom");

    addTask("Extra task");

    printTasks();

    return 0;
}
