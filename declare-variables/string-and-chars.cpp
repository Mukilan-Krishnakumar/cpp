// clang++ -std=c++17 --debug declare-variables/string-and-chars.cpp -o main
#include <iostream>
#include <string>
using namespace std;
int main() {
  auto x = 5;
  auto name = "Because"; // const char*
  auto name2 = string{"The Internet"};
  cout << x << " " << name << " " << name2 << "\n";

  name = "Childish Gambino";
  name2.append(" is awesome");
  cout << x << " " << name << " " << name2 << "\n";
}
