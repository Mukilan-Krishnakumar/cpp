// clang++ -std=c++17 --debug constructors-example/constructor-simple.cpp -o
// main
#include <iostream>
#include <string>
using namespace std;
class Person {
public:
  int age = 21;
  string name = "Andy";
};

int main() {
  Person person;
  Person person2 = Person();
  cout << person.age << person.name << "\n";
  cout << person2.age << person2.name << "\n";
}
