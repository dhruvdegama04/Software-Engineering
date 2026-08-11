/*Create a Task class in your favorite OOP language (Java, Python, or C++) with 
properties: title and isDone. Add a method markDone() that sets isDone to true, 
and a method display() that prints the task with its status.*/

#include <iostream>
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
        std::cout << "Task: " << title 
                  << " | Status: " << (isDone ? "Done" : "Pending") 
                  << std::endl;
    }
};

int main() 
{

    Task myTask("Buy groceries");

    std::cout << "--- Initial State ---" << std::endl;
    myTask.display();

    myTask.markDone();

    std::cout << "\n--- After Completing ---" << std::endl;
    myTask.display();

    return 0;
}