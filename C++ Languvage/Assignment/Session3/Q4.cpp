/*4.Simulate a BookMyShow ticket booking by creating a Ticket class that prints 'Saving your ticket...' in its destructor. Create and delete 
a Ticket object to demonstrate the destructor lifecycle.<br><br><em><strong>Hint:</strong> Use the __del__ method (Python) or ~Ticket() (C++) 
to define the destructor.</em>*/

#include <iostream>

using namespace std;

class Ticket {
public:
    Ticket() {
        cout << "Booking your ticket..." <<endl;
    }

    ~Ticket() {
        cout << "Saving your ticket..." <<endl;
    }
};

int main() {
    Ticket* myTicket = new Ticket();
    delete myTicket;

    return 0;
}