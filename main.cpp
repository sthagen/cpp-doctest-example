#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest/doctest.h>
#include <tribonacci.hpp>

TEST_CASE("tribonacci recursive") {
    // 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504, 927, 1705, 3136, 5768, 10609, 19513, 35890, 66012, … (sequence A000073 in the OEIS)
    CHECK(tribonacci(0) == 0);
    CHECK(tribonacci(1) == 1);
    CHECK(tribonacci(2) == 1);
    CHECK(tribonacci(3) == 2);
    CHECK(tribonacci(4) == 4);
    CHECK(tribonacci(5) == 7);
    CHECK(tribonacci(6) == 13);
    CHECK(tribonacci(7) == 24);
    CHECK(tribonacci(8) == 44);
    CHECK(tribonacci(9) == 81);
    CHECK(tribonacci(10) == 149);
    CHECK(tribonacci(11) == 274);
    CHECK(tribonacci(12) == 504);
    REQUIRE(tribonacci(13) == 927);
}

TEST_CASE("tribonacci iterative") {
    for (unsigned i=0; i<25; ++i) {
        CHECK(tribonacci(i) == tribonacci_iter(i));
    }
}
