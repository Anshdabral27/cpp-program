#include <iostream>

class Sum {
public:
    // Constructor for summing two integers
    Sum(int a, int b) {
        std::cout << "Sum of integers: " << a + b << std::endl;
    }

    // Constructor for summing two floats
    Sum(float a, float b) {
        std::cout << "Sum of floats: " << a + b << std::endl;
    }

    // Constructor for concatenating two characters
    Sum(char a, char b) {
        std::cout << "Concatenation of characters: " << a << b << std::endl;
    }
};

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 5.5f, float2 = 10.5f;
    char char1 = 'A', char2 = 'B';

    // Create objects of Sum using different constructors
    Sum sumInts(int1, int2);      // Calls the integer constructor
    Sum sumFloats(float1, float2); // Calls the float constructor
    Sum sumChars(char1, char2);   // Calls the char constructor

    return 0;
}
