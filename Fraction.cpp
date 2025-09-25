#include "Fraction.h"
#include <sstream>
Fraction::Fraction(long num, long denom)
         :numerator(num), denominator(denom) {
    if (denominator==0) {
        throw std::invalid_argument("Denominator cannot be zero.");
    }
    reduce();
}

long Fraction::getNumerator() const {
    return numerator;
}

long Fraction::getDenominator() const {
    return denominator;
}

/*
 * The reduce method reduces the fraction and simplifies
 * the sign of the fraction resulting in only the numerator
 * being positive or negative.
 */
void Fraction::reduce() {
    // store if the fraction is positive or negative.
    bool isNegative;
    if ((denominator < 0 && numerator < 0) || (denominator > 0 && numerator > 0)) {
        isNegative = false;
    } else {
        isNegative = true;
    }

    // reset the numerator and denominator to positive
    numerator = abs(numerator);
    denominator = abs(denominator);

    // get the greatest common denominator
    long greatest_common_denominator = gcd(numerator, denominator);

    // reduce the fraction
    numerator = numerator / greatest_common_denominator;
    denominator = denominator / greatest_common_denominator;

    // set the numerator to negative if the fraction was negative.
    if (isNegative) numerator = numerator * -1;

}

/*
 * The gcd method returns the greatest common denominator of two numbers.
 * The method uses a beautiful, compact, little recursive algorithm that
 * we'll discuss more when we get to recursion.
 */
long Fraction::gcd(long a, long b) {
    if (a == 0) {return b;}
    return gcd(b % a, a);
}

std::string Fraction::toString() const {
    std::stringstream ss;
    ss << getNumerator() << "/" << getDenominator();
    return ss.str();
}

// ---------- Arithmetic Operators --------------------
Fraction Fraction::operator+(const Fraction& rhs) const {
    return Fraction(
        getNumerator() * rhs.getDenominator() + rhs.getNumerator() * getDenominator(),
        getDenominator() * rhs.getDenominator()
    );
}

Fraction Fraction::operator+(long value) const {
    return *this + Fraction(value, 1);
}

Fraction Fraction::operator-(const Fraction& rhs) const {
    return Fraction(
        getNumerator() * rhs.getDenominator() - rhs.getNumerator() * getDenominator(),
        getDenominator() * rhs.getDenominator()
    );
}

Fraction Fraction::operator-(long value) const {
    return *this - Fraction(value, 1);
}

Fraction Fraction::operator*(const Fraction& rhs) const {
    return Fraction(getNumerator() * rhs.getNumerator(),
        getDenominator() * rhs.getDenominator());
}

Fraction Fraction::operator*(long value) const {
    return Fraction(getNumerator() * value, getDenominator());
}

Fraction Fraction::operator/(const Fraction& rhs) const {
    if (rhs.getNumerator() == 0) throw std::invalid_argument("Division by zero.");
    return Fraction(
        getNumerator() * rhs.getDenominator(),
        getDenominator() * rhs.getNumerator()
    );
}

Fraction Fraction::operator/(long value) const {
    if (value == 0) throw std::invalid_argument("Division by zero.");
    return Fraction(getNumerator(), getDenominator() * value);
}

// ---------- Increment / Decrement ----------
// Pre-increment (++f)
Fraction& Fraction::operator++() {
    numerator += 1;
    reduce();
    return *this;
}

// Post-increment (f++)
Fraction Fraction::operator++(int) {
    Fraction temp = *this;
    ++(*this);
    return temp;
}

// Pre-decrement (--f)
Fraction& Fraction::operator--() {
    numerator -= 1;
    reduce();
    return *this;
}

// Post-decrement (f--)
Fraction Fraction::operator--(int) {
    Fraction temp = *this;
    --(*this);
    return temp;
}


//-----------------Comparisons------------

bool Fraction::operator==(const Fraction& rhs) const {
    return getNumerator() == rhs.getNumerator() && getDenominator() == rhs.getDenominator();
}

bool Fraction::operator!=(const Fraction& rhs) const {
    return !(*this == rhs);
}

bool Fraction::operator<(const Fraction& rhs) const {
    return getNumerator() * rhs.getDenominator() < rhs.getNumerator() * getDenominator();
}

bool Fraction::operator>(const Fraction& rhs) const {
    return rhs < *this;
}

bool Fraction::operator<=(const Fraction& rhs) const {
    return !(*this > rhs);
}

bool Fraction::operator>=(const Fraction& rhs) const {
    return !(*this < rhs);
}

// ---------- Stream output ----------
std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
    os << frac.toString();
    return os;
}