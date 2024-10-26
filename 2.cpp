#include <iostream>

class SumNatural {
private:
    int n; // Number of natural numbers
    int sum; // Sum of natural numbers

public:
    // Default constructor
    SumNatural() : n(10), sum(0) { // Default to first 10 natural numbers
        calculateSum();
    }

    void calculateSum() {
        sum = (n * (n + 1)) / 2; // Formula for sum of first n natural numbers
    }

    void displaySum() {
        std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;
    }
};

int main() {
    SumNatural sn; // Create an object of SumNatural, sum will be calculated in the constructor
    sn.displaySum(); // Display the result
    return 0;
}
