// clang++ -std=c++17 --debug str-to-int-float/simple-conversion.cpp -o main
#include <iostream>
#include <string>
using namespace std;
int main() {
  string s("-100");
  string s2("   3008    ");
  string s3("     3008endofworld");
  string s4("3.145");
  string s5("9.16444e-07kg");

  int i = stoi(s);
  cout << i << "\n";

  long l = stol(s2);
  cout << l << "\n";

  unsigned long ul = stoul(s3);
  cout << ul << "\n";

  float pi = stof(s4);
  cout << pi << "\n";

  double mass = stof(s5);
  cout << mass << "\n";
}
