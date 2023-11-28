// clang++ --std=c++17 --debug type-deduction.cpp -o a.out
// auto - automatically deducts the type of variable by the initializer
// decltype - variables not initialized can also use type deduction
#include <iostream>
using namespace std;

int main() {
  int foo = 0;
  auto bar = foo;     // same as int bar=foo
  decltype(foo) bar1; // same as int bar1
  bar1 = 5;
  cout << foo << "\n" << bar << "\n" << bar1;
}
