/*Modify your tasklist_c.c to add a function markTaskDone(int index) that sets the 
selected task to 'DONE' in the array, then print the updated list.<br><br><em><strong>
Hint:</strong> Use a separate status array or append ' - DONE' to the task string.</em>*/

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> taskList = 
{
    "Buy groceries",
    "Complete C++ assignment",
    "Go for a walk",
    "Read a chapter of a book"
};


void printTasks() 
{
    std::cout << "\n====== TASK LIST ======\n";

    for (size_t i = 0; i < taskList.size(); ++i) 
    {
        std::cout << i + 1 << ". " << taskList[i] << "\n";
    }
    std::cout << "=======================\n";
}

void markTaskDone(int index) 
{
    if (index < 0 || index >= static_cast<int>(taskList.size())) 
    {
        std::cout << "\nError: Invalid task index (" << index << ")!\n";
        return;
    }

    if (taskList[index].find(" - DONE") == std::string::npos) 
    {
        taskList[index] += " - DONE";
        std::cout << "\n[Success] Task " << (index + 1) << " marked as DONE.";
    } 
    else 
    {
        std::cout << "\n[Notice] Task " << (index + 1) << " is already completed.";
    }

    printTasks();
}

int main() 
{
    printTasks();

    markTaskDone(1);

    markTaskDone(3);

    return 0;
}