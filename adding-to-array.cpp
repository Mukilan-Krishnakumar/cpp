// clang++ --debug adding-to-array.cpp -o main
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v;
  v.push_back(42);

  std::cout << v.size() << "\n";
  // vector::back function used to access the last element in vector
  std::cout << v.back() << "\n";
}
