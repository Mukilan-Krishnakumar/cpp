// clang++ -std=c++17 --debug removing-from-array.cpp -o main
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vectr{42, 3005};
  std::cout << "Universe only thing that will last, till " << vectr.back()
            << "\n";
  vectr.pop_back();
  std::cout << "Secret of the Universe is " << vectr.back() << "\n";
  return 0;
}
