#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "../Fraction.h"


TEST_CASE("Should be able to add two fractions with the same denominator") {
    Fraction lhs = Fraction(1, 5);
    Fraction rhs = Fraction(3, 5);
    Fraction sum = lhs + rhs;
    REQUIRE(sum.getNumerator() == 4);
    REQUIRE(sum.getDenominator() == 5);
}

TEST_CASE("Should be able to add two fractions with different denominator") {
    Fraction lhs = Fraction(3, 9);
    Fraction rhs = Fraction(3, 5);
    Fraction sum = lhs + rhs;
    REQUIRE(sum.getNumerator() == 14);
    REQUIRE(sum.getDenominator() == 15);
}

TEST_CASE("Should be able to add a fraction to a long") {
    Fraction lhs = Fraction(3, 9);
    long rhs = 7;
    Fraction sum = lhs + rhs;
    REQUIRE(sum.getNumerator() == 22);
    REQUIRE(sum.getDenominator() == 3);
}

TEST_CASE("Should be able to add a fraction to a int") {
    Fraction lhs = Fraction(3, 9);
    int rhs = 5;
    Fraction sum = lhs + rhs;
    REQUIRE(sum.getNumerator() == 16);
    REQUIRE(sum.getDenominator() == 3);
}

TEST_CASE("Should be able to subtract one fraction from another") {
    Fraction lhs = Fraction(3, 5);
    Fraction rhs = Fraction(3, 11);
    Fraction sum = lhs - rhs;
    REQUIRE(sum.getNumerator() == 18);
    REQUIRE(sum.getDenominator() == 55);
}

TEST_CASE("Should be able to subtract resulting a negative number") {
    Fraction lhs = Fraction(3, 5);
    Fraction rhs = Fraction(3, 4);
    Fraction sum = lhs - rhs;
    REQUIRE(sum.getNumerator() == -3);
    REQUIRE(sum.getDenominator() == 20);
}

TEST_CASE("Should be able to subtract a fraction by a int") {
    Fraction lhs = Fraction(3, 9);
    int rhs = 5;
    Fraction sum = lhs - rhs;
    REQUIRE(sum.getNumerator() == -14);
    REQUIRE(sum.getDenominator() == 3);
}