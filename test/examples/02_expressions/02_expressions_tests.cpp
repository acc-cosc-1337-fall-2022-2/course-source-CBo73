#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test operator precedence without parenthesis")
{
	REQUIRE(operator+precedence_1(2, 6, 3) == 4);
}

TEST_CASE("Test operator precedence without parenthesis 2")
{
	REQUIRE(operator_precedence_2(4, 6, 2) == 5);
}