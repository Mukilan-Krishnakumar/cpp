// clang++ -std=c++17 --debug constant-data-type.cpp -o main
#include <iostream>
#include <string>
using namespace std;

void print_name(const string &name) { cout << name << "\n"; }

int main() {
  const int x = 42;
  const string name = "John";
  cout << "Hi, my name is " << name << " \nI am " << x << " years old \n";
  print_name(name);
}
