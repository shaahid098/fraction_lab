#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include <fstream>        // std::fstream
#include "../Fraction.h"


TEST_CASE("Should be able to compare two fractions for equivalency") {
    Fraction lhs = Fraction(3, 5);
    Fraction rhs = Fraction(3, 4);
    bool result = lhs == rhs;
    REQUIRE_FALSE(result);
    rhs = Fraction(6, 10);
    result = lhs == rhs;
    REQUIRE(result);
}

TEST_CASE("Should be able to compare two fractions for not equivalency") {
    Fraction lhs = Fraction(3, 5);
    Fraction rhs = Fraction(3, 4);
    bool result = lhs != rhs;
    REQUIRE(result);
    rhs = Fraction(6, 10);
    result = lhs != rhs;
    REQUIRE_FALSE(result);
}

TEST_CASE("Should be able to compare two fractions using less than") {
    Fraction lhs = Fraction(3, 5);
    Fraction rhs = Fraction(3, 4);
    bool result = lhs < rhs;
    REQUIRE(result);
    rhs = Fraction(6, 10);
    result = lhs < rhs;
    REQUIRE_FALSE(result);
}

TEST_CASE("Should be able to compare two fractions using greater than") {
    Fraction lhs = Fraction(3, 4);
    Fraction rhs = Fraction(3, 5);
    bool result = lhs > rhs;
    REQUIRE(result);
    rhs = Fraction(6, 10);
    result = lhs < rhs;
    REQUIRE_FALSE(result);
}

TEST_CASE("Should be able to compare two fractions using less than or equals") {
    Fraction lhs = Fraction(3, 5);
    Fraction rhs = Fraction(3, 4);
    bool result = lhs <= rhs;
    REQUIRE(result);
    lhs = Fraction(6, 10);
    result = lhs <= rhs;
    REQUIRE(result);
}


TEST_CASE("Should be able to compare two fractions using greater than or equals") {
    Fraction lhs = Fraction(3, 4);
    Fraction rhs = Fraction(3, 5);
    bool result = lhs >= rhs;
    REQUIRE(result);
    lhs = Fraction(6, 10);
    result = lhs >= rhs;
    REQUIRE(result);
}
