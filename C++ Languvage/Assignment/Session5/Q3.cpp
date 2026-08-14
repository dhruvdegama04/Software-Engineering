/*3.Write a function in Java or Python that simulates a Flipkart-style search: overload a method searchProduct() to allow searching by 
product name or by product name and category. Demonstrate both usages with sample data.*/

#include <iostream>
#include <string>

using namespace std;

class FlipkartSearch {
public:
    void searchProduct(string productName) {
        cout << "Searching Flipkart for product: \"" << productName << "\"" << endl;
    }

    void searchProduct(string productName, string category) {
        cout << "Searching Flipkart for product: \"" << productName << "\" in category: [" << category << "]" << endl;
    }
};

int main() {
    FlipkartSearch search;

    search.searchProduct("Wireless Earbuds");
    search.searchProduct("Wireless Earbuds", "Electronics");

    return 0;
}