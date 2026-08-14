/*3.Imagine a Flipkart-like app: create an abstract class Product with an abstract method upload(). Then, create two subclasses, Electronics
 and Clothing, that each implement the upload() method to print a different upload message.*/

#include <iostream>
#include <string>

class Product {
public:
    virtual void upload() = 0;
    virtual ~Product() = default;
};

class Electronics : public Product {
public:
    void upload() override {
        std::cout << "Uploading electronic product details to Flipkart inventory..." << std::endl;
    }
};

class Clothing : public Product {
public:
    void upload() override {
        std::cout << "Uploading clothing apparel details to Flipkart inventory..." << std::endl;
    }
};

int main() {
    Product* laptop = new Electronics();
    Product* shirt = new Clothing();

    laptop->upload();
    shirt->upload();

    delete laptop;
    delete shirt;

    return 0;
}