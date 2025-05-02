#include <iostream>

int main() {
  int a = 10;
  float b = 20.5;
  auto c = a + b;  // auto deduces the type of c to be float
  std::cout << "The value of c is: " << c << std::endl;

  decltype(a + b) d = a + b;  // decltype deduces the type of d to be float
  std::cout << "The value of d is: " << d << std::endl;
}