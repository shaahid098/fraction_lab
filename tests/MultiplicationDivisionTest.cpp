#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include "../Fraction.h"



TEST_CASE("Should be able to multiply a fraction with another fraction") {
    Fraction lhs = Fraction(3, 5);
    Fraction rhs = Fraction(3, 4);
    Fraction product = lhs * rhs;
    REQUIRE(product.getNumerator() == 9);
    REQUIRE(product.getDenominator() == 20);
}

TEST_CASE("Should be able to multiply a fraction with a negative fraction") {
    Fraction lhs = Fraction(-3, 5);
    Fraction rhs = Fraction(3, 4);
    Fraction product = lhs * rhs;
    REQUIRE(product.getNumerator() == -9);
    REQUIRE(product.getDenominator() == 20);
}

TEST_CASE("Should be able to multiply a fraction with a a int") {
    Fraction lhs = Fraction(3, 9);
    int rhs = 5;
    Fraction sum = lhs * rhs;
    REQUIRE(sum.getNumerator() == 5);
    REQUIRE(sum.getDenominator() == 3);
}

TEST_CASE("Should be able to divide a fraction by another fraction") {
    Fraction lhs = Fraction(3, 5);
    Fraction rhs = Fraction(3, 4);
    Fraction product = lhs / rhs;
    REQUIRE(product.getNumerator() == 4);
    REQUIRE(product.getDenominator() == 5);
}

TEST_CASE("Should be able to divide a fraction by an int") {
    Fraction lhs = Fraction(3, 5);
    int rhs = 7;
    Fraction product = lhs / rhs;
    REQUIRE(product.getNumerator() == 3);
    REQUIRE(product.getDenominator() == 35);
}


