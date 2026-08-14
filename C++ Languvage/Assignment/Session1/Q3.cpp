/*Create a Task class in your favorite OOP language (Java, Python, or C++) with 
properties: title and isDone. Add a method markDone() that sets isDone to true, 
and a method display() that prints the task with its status.*/

#include <iostream>
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
        cout << "Task: " << title 
                  << " | Status: " << (isDone ? "Done" : "Pending") 
                  << std::endl;
    }
};

int main() 
{

    Task myTask("Buy groceries");

    cout << "--- Initial State ---" << endl;
    myTask.display();

    myTask.markDone();

    cout << "\n--- After Completing ---" << endl;
    myTask.display();

    return 0;
}