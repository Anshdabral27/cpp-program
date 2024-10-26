#include <iostream>

// Base class
class Base {
protected:
    int num1; // First number
    int num2; // Second number

public:
    // Constructor to initialize numbers
    Base(int a, int b) : num1(a), num2(b) {}
};

// Derived class
class Derived : public Base {
public:
    // Constructor that calls the base class constructor
    Derived(int a, int b) : Base(a, b) {}

    // Function to calculate the product of the two numbers
    void product() {
        int prod = num1 * num2;
        std::cout << "The product of " << num1 << " and " << num2 << " is: " << prod << std::endl;
    }
};

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // Create an object of the derived class
    Derived d(a, b);

    // Call the product function
    d.product();

    return 0;
}
