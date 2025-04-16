#include <iostream>

class Complex {
 private:
  int real;
  int imag;

 public:
  Complex(int r, int i) : real(r), imag(i) {}

  // Overloading the insertion operator
  friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
  }
};

int main() {
  Complex c1(3, 4);
  Complex c2(5, 6);
  std::cout << "Complex number 1: " << c1 << std::endl;
  std::cout << "Complex number 2: " << c2 << std::endl;
}