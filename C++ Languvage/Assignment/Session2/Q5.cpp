/*5.Refactor your FoodOrder class so that the constructor takes an object as a parameter (with keys orderId, restaurantName, isDelivered) 
instead of separate arguments. Update your instantiation code to use this new constructor signature.*/

#include <iostream>
#include <string>

using namespace std;

struct OrderDetails 
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder 
{
    public:
        int orderId;
        string restaurantName;
        bool isDelivered;

    FoodOrder(OrderDetails details) 
    {
        orderId = details.orderId;
        restaurantName = details.restaurantName;
        isDelivered = details.isDelivered;
    }

    void displayOrder()
    {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant: " << restaurantName <<endl;
        cout << "Status: " << (isDelivered ? "Delivered" : "Pending") <<endl;
    }
};

int main() 
{
    FoodOrder myOrder({101, "Tasty Burger", true});

    myOrder.displayOrder();

    return 0;
}