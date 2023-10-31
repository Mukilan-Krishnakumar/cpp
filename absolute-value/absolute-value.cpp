// You can run this file by running the following command clang++ --debug
// absolute-value.cpp -o main
#include <cmath>
#include <iostream>
int main() {
  auto floating_val = std::abs(-3.1432523);
  std::cout << floating_val << "\n";
  auto decimal_val = std::abs(-32);
  std::cout << decimal_val << "\n";
}
