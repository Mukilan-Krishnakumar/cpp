// clang++ -std=c++17 --debug str-to-int-float/optional-arguments.cpp -o main
#include <iostream>
#include <string>
using namespace std;
int main() {
  string s("1110Man on Moon Says 3008 is the end");

  size_t numProcessed;
  int i = stoi(s, &numProcessed, 2); // base 2
  string remainder = s.substr(numProcessed);

  cout << i << "\n";
  cout << "Processed " << numProcessed << "\n";
  cout << "Remainder " << remainder << "\n";
}
