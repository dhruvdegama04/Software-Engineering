/*5.Refactor your FoodOrder class so that the constructor takes an object as a parameter (with keys orderId, restaurantName, isDelivered) 
instead of separate arguments. Update your instantiation code to use this new constructor signature.*/

#include <iostream>
#include <string>

struct OrderDetails 
{
    int orderId;
    std::string restaurantName;
    bool isDelivered;
};

class FoodOrder 
{
    public:
        int orderId;
        std::string restaurantName;
        bool isDelivered;

    FoodOrder(OrderDetails details) 
    {
        orderId = details.orderId;
        restaurantName = details.restaurantName;
        isDelivered = details.isDelivered;
    }

    void displayOrder()
    {
        std::cout << "Order ID: " << orderId << std::endl;
        std::cout << "Restaurant: " << restaurantName << std::endl;
        std::cout << "Status: " << (isDelivered ? "Delivered" : "Pending") << std::endl;
    }
};

int main() 
{
    FoodOrder myOrder({101, "Tasty Burger", true});

    myOrder.displayOrder();

    return 0;
}