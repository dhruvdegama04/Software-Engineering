/*3.Create a class called FoodOrder with properties: orderId (number), restaurantName (string), and isDelivered (boolean). Write a member
function markDelivered() that sets isDelivered to true and prints a message. Instantiate FoodOrder and call markDelivered().*/

#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string name) {
        orderId = id;
        restaurantName = name;
        isDelivered = false;
    }

    void markDelivered() {
        isDelivered = true;
        cout << "Order #" << orderId << " from " << restaurantName << " has been delivered successfully!" << endl;
    }
};

int main() {
    FoodOrder myOrder(101, "Pizza Palace");

    myOrder.markDelivered();

    return 0;
}