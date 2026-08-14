/*1.Create a Java class called PaymentProcessor with two overloaded methods processPayment(): one that takes only an amount, and one that
 takes amount and a coupon code. Print which version is called and the final amount in each case.*/

 #include <iostream>
#include <string>

using namespace std;

class PaymentProcessor {
public:
    void processPayment(double amount) {
        cout << "Standard payment called. Final amount: $" << amount << endl;
    }

    void processPayment(double amount, string couponCode) {
        cout << "Coupon payment called with code [" << couponCode << "]. Final amount: $" << amount << endl;
    }
};

int main() {
    PaymentProcessor processor;

    processor.processPayment(100.0);
    processor.processPayment(100.0, "SAVE20");

    return 0;
}