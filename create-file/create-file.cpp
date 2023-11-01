// clang++ -std=c++17 --debug create-file/create-file.cpp -o main
#include <fstream>
using namespace std;
int main() {
  ofstream output("Testing.txt");
  output << "Man made of stars and Universe";
  output << "Infinite Wisdom";
}
