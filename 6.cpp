#include <iostream>

// Base class
class Base {
protected:
    int num1; // First number

public:
    // Constructor to initialize num1
    Base(int a) : num1(a) {}
};

// First derived class
class FirstDerived : public Base {
protected:
    int num2; // Second number

public:
    // Constructor that initializes num1 using base class and num2
    FirstDerived(int a, int b) : Base(a), num2(b) {}
};

// Second derived class
class SecondDerived : public FirstDerived {
public:
    // Constructor that initializes the base and first derived class
    SecondDerived(int a, int b) : FirstDerived(a, b) {}

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

    // Create an object of the second derived class
    SecondDerived obj(a, b);

    // Call the sum function
    obj.sum();

    return 0;
}
