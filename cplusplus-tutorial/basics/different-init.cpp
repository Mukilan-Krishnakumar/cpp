// clang++ --std=c++17 --debug different-init.cpp -o a.out
// Three valid intitializations
// c-like intitialization
// type identifier=initial_value;
// constructor intitialization
// type identifier (initial_value);
// uniform intitialization
// type identifier {initial_value};
//
#include <iostream>
using namespace std;

int main() {
  int a = 5;
  int b(10);
  int c{15};
  int d;

  d = a + b - c;
  cout << "Result is: " << d;
}
