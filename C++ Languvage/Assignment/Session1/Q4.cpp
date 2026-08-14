/*4.Build a simple TaskList class/object that stores multiple Task objects and provides addTask(title), markTaskDone(index), and showTasks() 
methods. Demonstrate adding 3 tasks, marking one as done, and displaying all tasks with their statuses.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Task 
{
    private:
        string title;
        bool isDone;

    public:
        Task(string taskTitle) 
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
        cout << "Status: [" << (isDone ? "Done" : "Pending") << "] " << title;
    }
};

class TaskList 
{
private:
    vector<Task> tasks; 

public:
    
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
            cout << "Invalid task index!" << endl;
        }
    }

    void showTasks() 
    {
        if (tasks.empty()) 
        {
            cout << "No tasks available." << endl;
            return;
        }

        cout << "--- Your Task List ---" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) 
        {
            cout << i << ". ";
            tasks[i].display();
            cout << std::endl;
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