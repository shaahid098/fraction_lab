#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "../Fraction.h"

TEST_CASE("The prefix increment operator should increment the numerator then return it") {
    Fraction fraction(1,3);
    Fraction result = ++fraction;
    REQUIRE(2 == result.getNumerator());
    REQUIRE(3 == result.getDenominator());
    REQUIRE(2 == fraction.getNumerator());
    REQUIRE(3 == fraction.getDenominator());

}

TEST_CASE("The postfix increment operator should increment the numerator then return it") {
    Fraction fraction(1,3);
    Fraction result = fraction++;
    REQUIRE(1 == result.getNumerator());
    REQUIRE(3 == result.getDenominator());
    REQUIRE(2 == fraction.getNumerator());
    REQUIRE(3 == fraction.getDenominator());

}

TEST_CASE("The prefix decrement operator should decrement the numerator then return it") {
    Fraction fraction(2, 3);
    Fraction result = --fraction;
    REQUIRE(1 == result.getNumerator());
    REQUIRE(3 == result.getDenominator());
    REQUIRE(1 == fraction.getNumerator());
    REQUIRE(3 == fraction.getDenominator());

}

TEST_CASE("The postfix decrement operator should decrement the numerator then return it") {
    Fraction fraction(2,3);
    Fraction result = fraction--;
    REQUIRE(2 == result.getNumerator());
    REQUIRE(3 == result.getDenominator());
    REQUIRE(1 == fraction.getNumerator());
    REQUIRE(3 == fraction.getDenominator());

}

