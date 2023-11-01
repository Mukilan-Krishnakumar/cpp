// clang++ -std=c++17 --debug str-to-int-float/exception-handling.cpp -o main
#include <iostream>
#include <string>
using namespace std;
int main() {
  string s("Man on Moon 3008");
  try {
    int i = stoi(s);
    cout << i << "\n";
  } catch (const invalid_argument &e) {
    cout << e.what() << "\n";
  }

  string s2 = "99999999999999999999";
  try {
    int i = stoi(s2);
    cout << i << "\n";
  } catch (const out_of_range &e) {
    cout << e.what() << "\n";
  }
}
