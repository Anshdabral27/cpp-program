#include <iostream>

class SumNatural {
private:
    int n; 
    int sum; 

public:
    // Default constructor
    SumNatural() : n(10), sum(0) { 
        calculateSum();
    }

    void calculateSum() {
        sum = (n * (n + 1)) / 2; 
    }

    void displaySum() {
        std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;
    }
};

int main() {
    SumNatural sn; 
    sn.displaySum(); 
    return 0;
}
