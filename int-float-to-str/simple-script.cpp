// clang++ -std=c++17 --debug int-float-to-str/simple-script.cpp -o main
#include <iostream>
#include <string>
using namespace std;
int main() {
  int i = -42;
  float pi = 3.14563232322;
  // We will lose precision with to_string function
  string s1 = to_string(i);
  string s2 = to_string(pi);

  cout << s1 << "\n";
  cout << s2 << "\n";
}
