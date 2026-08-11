/*1.Write a simple C program tasklist_c.c that allows you to add up to 5 tasks 
(as strings) to a global array and print all tasks using a for loop.*/


#include <iostream>
#include <string>

const int MAX_TASKS = 5;
std::string tasks[MAX_TASKS];
int taskCount = 0;

void addTask(const std::string& task) {
    if (taskCount < MAX_TASKS) {
        tasks[taskCount] = task;
        taskCount++;
        std::cout << "Added task: " << task << std::endl;
    } else {
        std::cout << "Cannot add \"" << task << "\" - Task list is full!" << std::endl;
    }
}

void printTasks() {
    std::cout << "\n--- Current Tasks ---" << std::endl;
    
    for (int i = 0; i < taskCount; i++) {
        std::cout << (i + 1) << ". " << tasks[i] << std::endl;
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
