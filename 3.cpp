#include <iostream>

class ArraySum {
private:
    int* arr;    // Pointer to the array
    int size;    // Size of the array

public:
    // Parameterized constructor
    ArraySum(int* inputArr, int s) : size(s) {
        arr = new int[size]; // Dynamically allocate memory for the array
        for (int i = 0; i < size; ++i) {
            arr[i] = inputArr[i]; // Copy elements
        }
    }

    // Copy constructor
    ArraySum(const ArraySum& other) {
        size = other.size;
        arr = new int[size]; // Dynamically allocate memory for the new array
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i]; // Copy elements
        }
    }

    // Function to calculate the sum of positive integers
    int sumOfPositiveIntegers() const {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }

    // Destructor to free allocated memory
    ~ArraySum() {
        delete[] arr; // Free allocated memory
    }
};

int main() {
    int numbers[] = {1, -2, 3, 4, -5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Create an ArraySum object
    ArraySum originalArray(numbers, size);

    // Create a copy using the copy constructor
    ArraySum copiedArray(originalArray);

    // Calculate and display the sum of positive integers
    int sum = copiedArray.sumOfPositiveIntegers();
    std::cout << "The sum of all positive integers in the array is: " << sum << std::endl;

    return 0;
}


