/*5.Compare your procedural C version and OOP TaskList version: List 3 problems you faced in the C version that were solved by using 
classes and methods in the OOP version.*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Task 
{
    private:
        int id;
        string title;
        bool isCompleted;

    public:
        Task(int taskId, const string& taskTitle) 
        {
            id = taskId;
            title = taskTitle;
            isCompleted = false;
        }

    int getId() const { return id; }
    
    void markCompleted() 
    { 
        isCompleted = true; 
    }

    void display() const 
    {
        cout << "[" << (isCompleted ? "F" : "T") << "] " << id << ". " << title << "\n";
    }
};

class TaskList 
{
    private:
        vector<Task> tasks; 
        int nextId;

    public:
        TaskList() 
        {
            nextId = 1;
        }

    void addTask(const string& title) 
    {
        Task newTask(nextId, title);
        tasks.push_back(newTask);
        nextId++;
        cout << "Task added successfully!\n";
    }

    void completeTask(int id) 
    {
        for (auto& task : tasks) 
        {
            if (task.getId() == id) 
            {
                task.markCompleted();
                cout << "Task #" << id << " marked as done!\n";
                return;
            }
        }
        cout << "Error: Task #" << id << " not found.\n";
    }

    void displayAll() const 
    {
        if (tasks.empty()) 
        {
            cout << "No tasks in the list.\n";
            return;
        }

        cout << "\n--- CURRENT TASKS ---\n";
        for (const auto& task : tasks) 
        {
            task.display();
        }
        cout << "---------------------\n";
    }
};

int main() 
{
    TaskList myTaskList;

    myTaskList.addTask("Study C++ OOP concepts");
    myTaskList.addTask("Complete homework assignment");
    myTaskList.addTask("Go for a run");

    myTaskList.displayAll();
    myTaskList.completeTask(2);
    myTaskList.displayAll();
    return 0;
}