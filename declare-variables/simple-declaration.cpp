// clang++ -std=c++17 --debug declare-variables/simple-declaration.cpp -o main
#include <iostream>
#include <string>
using namespace std;
int main() {
  int x = 5;
  string s = "Todd";
  cout << x << " " << s << "\n";

  x = 42;
  s = "Bate";
  cout << x << " " << s << "\n";
}
