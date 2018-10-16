#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include "max-subsequence.cpp"

TEST_CASE("2, -3, 4, 1, 5", "[10]") {
    std::istringstream in("5\n"
                          "2\n"
                          "-3\n"
                          "4\n"
                          "1\n"
                          "5");
    REQUIRE(sumMaxSubSequence(in) == 10);
}

TEST_CASE("3, -2, 4, 1, 5", "[11]") {
    std::istringstream in("5\n"
                          "3\n"
                          "-2\n"
                          "4\n"
                          "1\n"
                          "5");
    REQUIRE(sumMaxSubSequence(in) == 11);
}