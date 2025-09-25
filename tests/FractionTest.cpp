#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include "../Fraction.h"


TEST_CASE("Should be able to get and set the numerator") {
    Fraction fraction = Fraction(4, 5);
    long numerator = fraction.getNumerator();
    REQUIRE(numerator == 4);
}

TEST_CASE("Should be able to get the denominator") {
    Fraction fraction = Fraction(1, 7);
    long denominator = fraction.getDenominator();
    REQUIRE(denominator == 7);
}

TEST_CASE("Setting the denominator to 0 should throw an exception") {
    CHECK_THROWS(Fraction(3,0));
}

TEST_CASE("Should be able to create a Fraction with numerator and denominator") {
    Fraction fraction = Fraction(1,4);
    long numerator = fraction.getNumerator();
    REQUIRE(numerator == 1);
    long denominator = fraction.getDenominator();
    REQUIRE(denominator == 4);
}

TEST_CASE("A Fraction should reduce when created") {
    Fraction fraction = Fraction(2,4);
    long numerator = fraction.getNumerator();
    REQUIRE(numerator == 1);
    long denominator = fraction.getDenominator();
    REQUIRE(denominator == 2);

    Fraction fraction2 = Fraction(1701,3768);
    numerator = fraction2.getNumerator();
    REQUIRE(numerator == 567);
    denominator = fraction2.getDenominator();
    REQUIRE(denominator == 1256);
}

TEST_CASE("Should be able to be negative") {
    Fraction fraction = Fraction(-2,5);
    long numerator = fraction.getNumerator();
    REQUIRE(numerator == -2);
    long denominator = fraction.getDenominator();
    REQUIRE(denominator == 5);
}

TEST_CASE("If a negative denominator is set the numerator should come back negative ") {
    Fraction fraction = Fraction(2,-5);
    long numerator = fraction.getNumerator();
    REQUIRE(numerator == -2);
    long denominator = fraction.getDenominator();
    REQUIRE(denominator == 5);
}

TEST_CASE("negative numerator and denominator should be positive") {
    Fraction fraction = Fraction(-2,-5);
    long numerator = fraction.getNumerator();
    REQUIRE(numerator == 2);
    long denominator = fraction.getDenominator();
    REQUIRE(denominator == 5);
}

