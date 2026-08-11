/*4.Build a simple TaskList class/object that stores multiple Task objects and provides addTask(title), markTaskDone(index), and showTasks() 
methods. Demonstrate adding 3 tasks, marking one as done, and displaying all tasks with their statuses.*/

#include <iostream>
#include <vector>
#include <string>

class Task 
{
    private:
        std::string title;
        bool isDone;

    public:
        Task(std::string taskTitle) 
        {
            title = taskTitle;
            isDone = false;
        }

    void markDone() 
    {
        isDone = true;
    }

    void display() 
    {
        std::cout << "Status: [" << (isDone ? "Done" : "Pending") << "] " << title;
    }
};

class TaskList 
{
private:
    std::vector<Task> tasks; 

public:
    // Adds a new Task object to the list
    void addTask(std::string title) 
    {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index) 
    {
        if (index >= 0 && index < tasks.size()) 
        {
            tasks[index].markDone();
        } 
        else 
        {
            std::cout << "Invalid task index!" << std::endl;
        }
    }

    void showTasks() 
    {
        if (tasks.empty()) 
        {
            std::cout << "No tasks available." << std::endl;
            return;
        }

        std::cout << "--- Your Task List ---" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) 
        {
            std::cout << i << ". ";
            tasks[i].display();
            std::cout << std::endl;
        }
    }
};

int main() 
{
    TaskList myTodoList;

    myTodoList.addTask("Buy groceries");
    myTodoList.addTask("Finish C++ homework");
    myTodoList.addTask("Clean the room");
    myTodoList.markTaskDone(1);
    myTodoList.showTasks();

    return 0;
}