#include <iostream>

class Complex {
 public:
  double real;
  double imag;

 public:
  Complex(double r = 0, double i = 0) : real(r), imag(i) {}

  // Overloading the + operator
  friend Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
  }
};

int main() {
  Complex c1(3.0, 4.0);
  Complex c2(1.0, 2.0);
  Complex c3 = c1 + c2;  // Using the overloaded + operator
  std::cout << "c1 + c2 = " << c3.real << " + " << c3.imag << "i" << std::endl;

  // Output: c1 + c2 = 4.0 + 6.0i

  return 0;
}