/*5.Compare your procedural C version and OOP TaskList version: List 3 problems you faced in the C version that were solved by using 
classes and methods in the OOP version.*/
#include <iostream>
#include <string>
#include <vector>

class Task 
{
    private:
        int id;
        std::string title;
        bool isCompleted;

    public:
        Task(int taskId, const std::string& taskTitle) 
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
        std::cout << "[" << (isCompleted ? "F" : "T") << "] " << id << ". " << title << "\n";
    }
};

class TaskList 
{
    private:
        std::vector<Task> tasks; 
        int nextId;

    public:
        TaskList() 
        {
            nextId = 1;
        }

    void addTask(const std::string& title) 
    {
        Task newTask(nextId, title);
        tasks.push_back(newTask);
        nextId++;
        std::cout << "Task added successfully!\n";
    }

    void completeTask(int id) 
    {
        for (auto& task : tasks) 
        {
            if (task.getId() == id) 
            {
                task.markCompleted();
                std::cout << "Task #" << id << " marked as done!\n";
                return;
            }
        }
        std::cout << "Error: Task #" << id << " not found.\n";
    }

    void displayAll() const 
    {
        if (tasks.empty()) 
        {
            std::cout << "No tasks in the list.\n";
            return;
        }

        std::cout << "\n--- CURRENT TASKS ---\n";
        for (const auto& task : tasks) 
        {
            task.display();
        }
        std::cout << "---------------------\n";
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