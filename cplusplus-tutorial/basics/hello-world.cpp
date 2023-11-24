// Comments
/* Multiline
Comments */
// Compiled by - clang++ --std=c++17 --debug hello-world.cpp -o a
// #include files are preprocessors i.e interpreted before the compilation
// header iostream has standard input and output operations
// These don't need semicolon in the end
#include <iostream>

// instead of always typing std::cin etc, std -> standard
// This is called declaration, instead of explicit qualification
// Can sometimes cause naming collisions, so beware
using namespace std;

int main() {
  cout << "Hello World";
  cout << "This is a C++ program";
}
