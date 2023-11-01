// clang++ -std=c++17 --debug destructors-example/simple-destructor.cpp -o main
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class OnePiece {
public:
  explicit OnePiece(string name) : name_(name) {
    cout << name_ << " is the Pirate King"
         << "\n";
  }
  ~OnePiece() {
    cout << name_ << " is legendary"
         << "\n";
  }

private:
  string name_;
};

int main() {
  OnePiece luffy("Luffy");
  {
    vector<OnePiece> vec;
    vec.emplace_back("Gol D Roger");
  }
  OnePiece joyboy("JoyBoy");
}
