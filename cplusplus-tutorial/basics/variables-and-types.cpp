// clang++ --std=c++17 --debug variables-and-types.cpp -o a
// Variables - portion of memory to store a value
// Identifiers - C++ keywords which cannot be used by us, at all.
// Identifiers are reserved for operations, data descriptions etc.
// Arithmetic Types - char, int, float, bool
// void type - lack of any type
// nullptr - special type of pointer
// C++ is strongly typed language - Every variable needs to be declared with its
// type before use.
#include <iostream>
using namespace std;

int main() {
  int a;
  // multiple declarations
  int b, c, d;
  b = 5;
  c = 10;
  d = 12;
  a = b + c - d;
  cout << "The value is " << a;

  return 0;
}
