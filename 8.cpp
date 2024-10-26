#include <iostream>

// Base class
class Base {
protected:
    int num1; // First number
    int num2; // Second number

public:
    // Constructor to initialize num1 and num2
    Base(int a, int b) : num1(a), num2(b) {}
};

// First derived class
class FirstDerived : public Base {
public:
    // Constructor that initializes base class
    FirstDerived(int a, int b) : Base(a, b) {}

    // Function to display the first number
    void displayFirst() {
        std::cout << "First number: " << num1 << std::endl;
    }
};

// Second derived class
class SecondDerived : public Base {
public:
    // Constructor that initializes base class
    SecondDerived(int a, int b) : Base(a, b) {}

    // Function to display the second number
    void displaySecond() {
        std::cout << "Second number: " << num2 << std::endl;
    }
};

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // Create objects of derived classes
    FirstDerived firstObj(a, b);
    SecondDerived secondObj(a, b);

    // Display the numbers using derived class functions
    firstObj.displayFirst();   // Display first number
    secondObj.displaySecond();  // Display second number

    return 0;
}
