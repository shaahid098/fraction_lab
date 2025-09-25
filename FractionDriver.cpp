#include <iostream>
#include "Fraction.h"

int main() {
    try {
        // Create two fractions
        Fraction f1(3, 4);
        Fraction f2(2, 5);

        // Display fractions
        std::cout << "Fraction f1: " << f1 << std::endl;
        std::cout << "Fraction f2: " << f2 << std::endl;

        // Arithmetic operations
        std::cout << "\nArithmetic Operations:" << std::endl;
        std::cout << "f1 + f2 = " << (f1 + f2) << std::endl;
        std::cout << "f1 - f2 = " << (f1 - f2) << std::endl;
        std::cout << "f1 * f2 = " << (f1 * f2) << std::endl;
        std::cout << "f1 / f2 = " << (f1 / f2) << std::endl;

        // Operations with integers
        std::cout << "\nOperations with Integers:" << std::endl;
        std::cout << "f1 + 2 = " << (f1 + 2) << std::endl;
        std::cout << "f2 - 1 = " << (f2 - 1) << std::endl;
        std::cout << "f1 * 3 = " << (f1 * 3) << std::endl;
        std::cout << "f2 / 2 = " << (f2 / 2) << std::endl;

        // Increment and Decrement
        std::cout << "\nIncrement and Decrement:" << std::endl;
        std::cout << "++f1 = " << ++f1 << std::endl;  // pre-increment
        std::cout << "f2++ = " << f2++ << " (after increment: " << f2 << ")" << std::endl;
        std::cout << "--f1 = " << --f1 << std::endl;  // pre-decrement
        std::cout << "f2-- = " << f2-- << " (after decrement: " << f2 << ")" << std::endl;

        // Comparisons
        std::cout << "\nComparisons:" << std::endl;
        std::cout << "f1 == f2? " << (f1 == f2 ? "true" : "false") << std::endl;
        std::cout << "f1 != f2? " << (f1 != f2 ? "true" : "false") << std::endl;
        std::cout << "f1 > f2? " << (f1 > f2 ? "true" : "false") << std::endl;
        std::cout << "f1 < f2? " << (f1 < f2 ? "true" : "false") << std::endl;
        std::cout << "f1 >= f2? " << (f1 >= f2 ? "true" : "false") << std::endl;
        std::cout << "f1 <= f2? " << (f1 <= f2 ? "true" : "false") << std::endl;

        // Exception Handling (Denominator Zero)
        std::cout << "\nTesting exception:" << std::endl;
        Fraction badFraction(5, 0);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    return 0;
}