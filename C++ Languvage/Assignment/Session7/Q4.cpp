/*4.Build a Flipkart-style wishlist tracker: ask the user to enter 3 product names and prices, save them to a file called wishlist.txt, then 
read the file and display each product with its price.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("wishlist.txt");

    if (outFile.is_open()) {
        for (int i = 0; i < 3; i++) {
            string name;
            double price;

            cout << "Enter product " << i + 1 << " name: ";
            getline(cin >> ws, name);
            cout << "Enter product " << i + 1 << " price: ";
            cin >> price;

            outFile << name << "," << price << "\n";
        }
        outFile.close();
    }

    ifstream inFile("wishlist.txt");
    string name;
    double price;

    cout << "\n--- Your Wishlist ---\n";
    if (inFile.is_open()) {
        while (getline(inFile, name, ',') && inFile >> price) {
            inFile.ignore();
            cout << "Product: " << name << " | Price: Rs. " << price << "\n";
        }
        inFile.close();
    }

    return 0;
}