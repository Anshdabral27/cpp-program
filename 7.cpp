#include <iostream>

// First base class
class Base1 {
protected:
    int num1; // First number

public:
    // Constructor to initialize num1
    Base1(int a) : num1(a) {}
};

// Second base class
class Base2 {
protected:
    int num2; // Second number

public:
    // Constructor to initialize num2
    Base2(int b) : num2(b) {}
};

// Derived class
class Derived : public Base1, public Base2 {
public:
    // Constructor that initializes both base classes
    Derived(int a, int b) : Base1(a), Base2(b) {}

    // Function to calculate the sum of num1 and num2
    void sum() {
        int total = num1 + num2;
        std::cout << "The sum of " << num1 << " and " << num2 << " is: " << total << std::endl;
    }
};

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // Create an object of the derived class
    Derived obj(a, b);

    // Call the sum function
    obj.sum();

    return 0;
}
