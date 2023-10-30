// clang++ -std=c++17 --debug adding-to-string.cpp -o main
#include <iostream>
#include <string>

int main() {
  std::string pirate{"Luffy"};
  pirate.append(" will be the");
  pirate += " pirate king";
  std::cout << pirate << "\n";
}
