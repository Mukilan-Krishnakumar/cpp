// clang++ --std=c++17 --debug simple-string.cpp -o a.out
// string is a compound type
// need to import string package
// works with all the same initializations
// all standard operations are possible
#include <iostream>
#include <string>
using namespace std;

int main() {
  string l1 = "Monkey";
  string l2("D.");
  string l3{"Luffy"};
  string name;
  name = l1 + " " + l2 + " " + l3;
  cout << name << " is the Pirate King" << endl;
}
