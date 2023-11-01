// clang++ -std=c++17 --debug constructors-example/constructor-custom.cpp -o
// main
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
  Person() = default;
  Person(int age) : age(age) {}
  Person(int age, string name) : age(age), name(name) {}
  int age = 21;
  string name = "Andy";
};

int main() {
  Person person;
  cout << person.age << " " << person.name << "\n";

  Person person2 = Person(24);
  cout << person2.age << " " << person2.name << "\n";

  Person person3 = Person(24, "Roronoa Zoro");
  cout << person3.age << " " << person3.name << "\n";
}
