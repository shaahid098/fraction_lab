#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <cmath>

class Fraction {
private:
    long numerator; // Numerator of the fraction
    long denominator; // Denominator of the fraction

    void reduce(); // Reduces the fraction using gcd
    long gcd(long a, long b); // Recursive GCD

public:
    /**
     * Constructor to initialize Fraction with numerator and denominator.
     * Throws an exception if denominator is zero.
     */
    Fraction(long num = 0, long denom = 1);

    /**
    * Gets the numerator of the fraction.
    * @return Numerator
    */
    long getNumerator() const;


    /**
     * Gets the denominator of the fraction.
     * @return Denominator
     */
    long getDenominator() const;

    /**
     * Converts the fraction to a string representation "numerator/denominator".
     * @return String form of the fraction
     */
    std::string toString() const;

    // Arithmetic

    Fraction operator+(const Fraction& other) const;
    Fraction operator+(long value) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator-(long value) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator*(long value) const;
    Fraction operator/(const Fraction& other) const;
    Fraction operator/(long value) const;

    // Increment/Decrement
    Fraction& operator++();
    Fraction operator++(int);
    Fraction& operator--();
    Fraction operator--(int);

    // Comparisons
    bool operator==(const Fraction& other) const;
    bool operator!=(const Fraction& other) const;
    bool operator<(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
    bool operator<=(const Fraction& other) const;
    bool operator>=(const Fraction& other) const;

    // Stream output
    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac);
};

#endif // FRACTION_H