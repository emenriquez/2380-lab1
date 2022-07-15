// 020-TestCase-2.cpp
// Source: https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
using namespace std;

// ******** TASK 1 ******** 
// Fill in the function below to return the largest divisor of a number
// input: number, for example 12
// returns: largest value than can divide input without remainder
//      example, for 12, divisors are 1, 2, 3, 4, 6, 12
//             so the result is 6
//             if there is no valid divisor for the value greater than 1, return 0
int findDivisor(int number) {
  return 0;
}

// ******** TASK 2 ******** 
// Fill in the function below to calculate the factorial of an input number
// input: integer value, example: 4
// returns: integer - factorial of input value, example: 4*3*2*1 = 24
int factorial(int number) {
  return 0;
}


TEST_CASE( "1: divisor of 1 or less", "[multi-file:1]") {
  REQUIRE(findDivisor(0) == 0);
  REQUIRE(findDivisor(1) == 0);
}

TEST_CASE( "1: divisors of higher values", "[multi-file:1]") {
  REQUIRE(findDivisor(10) == 5);
  REQUIRE(findDivisor(2045) == 409);
  REQUIRE(findDivisor(10007) == 0);
}

TEST_CASE( "2: Factorial of 0", "[multi-file:2]" ) {
    REQUIRE( factorial(0) == 1 );
}

TEST_CASE( "2: Factorials of 1 and higher are computed", "[multi-file:2]" ) {
    REQUIRE( factorial(1) == 1 );
    REQUIRE( factorial(2) == 2 );
    REQUIRE( factorial(3) == 6 );
    REQUIRE( factorial(10) == 3628800 );
}
