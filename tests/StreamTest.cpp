#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "../Fraction.h"
#include <string> //added
#include <sstream> //added
using namespace std; //added

TEST_CASE("to string should return fraction as a string ") {
    Fraction *half = new Fraction(1,2);
    string result = half->toString();
    REQUIRE("1/2" == result);
}

TEST_CASE("to string should return negative fraction as a string ") {
    Fraction *three_eights = new Fraction(-3,8);
    string result = three_eights->toString();
    REQUIRE("-3/8" == result);
}

TEST_CASE("Should be able to output a fraction to a string stream") {
    Fraction fourth = Fraction(1,4);
    stringstream ss;
    ss << fourth;
    REQUIRE("1/4" == ss.str());
}

TEST_CASE("Should be able to output a fraction pointer to a string stream") {
    Fraction *seven_eighths = new Fraction(-7,8);
    stringstream ss;
    ss << *seven_eighths; //added
    REQUIRE("-7/8" == ss.str());
}

TEST_CASE("Should be able to output a reduced fraction to a string stream") {
    Fraction half = Fraction(2,4);
    stringstream ss;
    ss << half;
    REQUIRE("1/2" == ss.str());
}

