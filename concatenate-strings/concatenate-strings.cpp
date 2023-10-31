// clang++ -std=c++17 --debug concatenate-strings.cpp -o main
#include <iostream>
#include <string>

int main() {
  std::string subject{"Zoro"};
  std::string verb{"is terrible"};
  std::string object{"with directions"};
  std::string result = subject + " " + verb + " " + object;
  std::cout << result << "\n";
}
