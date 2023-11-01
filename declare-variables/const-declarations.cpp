// clang++ -std=c++17 --debug declare-variables/const-declarations.cpp -o main
#include <iostream>
#include <string>
using namespace std;
int main() {
  const int i = 42;
  const string s = "Life";

  cout << i << " " << s << "\n";
}
