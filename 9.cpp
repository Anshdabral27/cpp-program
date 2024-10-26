#include <iostream>

// Base class A
class A {
protected:
    int valueA;

public:
    // Constructor to initialize valueA
    A(int a) : valueA(a) {}

    void displayA() {
        std::cout << "Value from class A: " << valueA << std::endl;
    }
};

// Derived class B
class B : public A {
protected:
    int valueB;

public:
    // Constructor to initialize valueA and valueB
    B(int a, int b) : A(a), valueB(b) {}

    void displayB() {
        std::cout << "Value from class B: " << valueB << std::endl;
    }
};

// Derived class C
class C : public A {
protected:
    int valueC;

public:
    // Constructor to initialize valueA and valueC
    C(int a, int c) : A(a), valueC(c) {}

    void displayC() {
        std::cout << "Value from class C: " << valueC << std::endl;
    }
};

// Derived class D
class D : public A {
protected:
    int valueD;

public:
    // Constructor to initialize valueA and valueD
    D(int a, int d) : A(a), valueD(d) {}

    void displayD() {
        std::cout << "Value from class D: " << valueD << std::endl;
    }
};

// Derived class E
class E : public B {
protected:
    int valueE;

public:
    // Constructor to initialize valueA, valueB, and valueE
    E(int a, int b, int e) : B(a, b), valueE(e) {}

    void displayE() {
        std::cout << "Value from class E: " << valueE << std::endl;
    }
};

int main() {
    int a, b, c, d, e;
    std::cout << "Enter values for A, B, C, D, and E: ";
    std::cin >> a >> b >> c >> d >> e;

    // Create objects of the classes
    B objB(a, b);
    C objC(a, c);
    D objD(a, d);
    E objE(a, b, e);

    // Display values
    objB.displayA();
    objB.displayB();

    objC.displayA();
    objC.displayC();

    objD.displayA();
    objD.displayD();

    objE.displayA();
    objE.displayB();
    objE.displayE();

    return 0;
}
