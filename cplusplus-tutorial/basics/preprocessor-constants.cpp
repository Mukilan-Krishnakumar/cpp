// clang++ --std=c++17 --debug preprocessor-constants.cpp -o a.out
// Basically, we don't store PI value in memory
// It might be used a lot, this preprocessor directive saves us from lot of IO
// operations It first processos this directive. This is also called a Macro
#include <iostream>
using namespace std;

// Don't close this with semicolon, if done throws an error
#define PI 3.1415

int main() {
  double r = 3.5;
  double area;

  area = 2 * PI * r;
  cout << area << endl;
}
