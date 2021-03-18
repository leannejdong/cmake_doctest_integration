#include <simplelib/simplelib.h>

#include "doctest.h"

TEST_CASE("Test square") {
  REQUIRE(4.0 == sl::square(2.0));
  REQUIRE(0.0 == sl::square(0.0));
}

TEST_CASE("Test cube") {
  REQUIRE(8.0 == sl::cube(2.0));
  REQUIRE(0.0 == sl::cube(0.0));
}
