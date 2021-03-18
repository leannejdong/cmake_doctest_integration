#include <simplelib/simplelib.h>

#include <iostream>

int main(int argc, const char *argv[]) {
  std::cout << "2^2 = " << sl::square(2.0) << std::endl;
  std::cout << "2^3 = " << sl::cube(2.0) << std::endl;
}