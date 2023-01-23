// 020-TestCase-2.cpp
// Source: https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
using namespace std;

// ******** TASK 1 ******** 
// Fill in the function below to return the string "Correct Answer!"
// input: any integer value, for example 12
// returns: the string "Correct Answer!"
string testFunc(int number) {
  return "Wrong! Need to fix this.";
}

// ******** TASK 2 ******** 
// Fill in the function below to calculate the factorial of an input number
// input: integer value, example: 4
// returns: integer - factorial of input value, example: 4*3*2*1 = 24
// Be sure to handle any errors in case you get an input such as zero or a negative value!
int factorial(int number) {
  return 0;
}






TEST_CASE("testFunc") {
  REQUIRE(testFunc(-3) == "Correct Answer!");
  REQUIRE(testFunc(10) == "Correct Answer!");
}

TEST_CASE("factorial") {
  CHECK_NOTHROW(factorial(5));
  CHECK_NOTHROW(factorial(1));
}

TEST_CASE("Error Handling") {
  CHECK_NOTHROW(factorial(0));
  CHECK_NOTHROW(factorial(-6));
}
