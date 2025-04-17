#include <iostream>

class Base {
 private:
  int x;

 protected:
  int y;

 public:
  int z;
  Base() {
    x = 1;
    y = 2;
    z = 3;
    std::cout << "Default constructor called" << std::endl;
  }
  Base(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
    std::cout << "Constructor called with data: " << x << ", " << y << ", " << z
              << std::endl;
  }
  void setX(int a) { x = a; }
  int getX() { return x; }
  void setY(int a) { y = a; }
  int getY() { return y; }
  void setZ(int a) { z = a; }
  int getZ() { return z; }
  ~Base() { std::cout << "Base destructor called" << std::endl; }
};

int main() {
  Base b1;
  b1.setX(3);  // b1.x = 9 not valid
  b1.setY(3);  // b1.y = 9 not valid
  b1.setZ(3);
  std::cout << "X: " << b1.getX() << ", Y: " << b1.getY()
            << ", Z: " << b1.getZ() << std::endl;

  return 0;
}