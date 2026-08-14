/*2.Build a class Product for a Flipkart-style app with a parameterized constructor that takes productName, price, and rating as 
arguments and displays all details using a displayInfo() method*/

#include <iostream>
#include <string>

using namespace std;

class Product 
{
    private:
        string productName;
        double price;
        double rating;

    public:
        Product(string name, double p, double r) 
        {
            productName = name;
            price = p;
            rating = r;
        }

    void displayInfo() 
    {
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price <<endl;
        cout << "Rating: " << rating << "/5" <<endl;
    }
};

int main() 
{
    Product p1("Wireless Headphones", 1499.00, 4.5);
    p1.displayInfo();
    return 0;
}