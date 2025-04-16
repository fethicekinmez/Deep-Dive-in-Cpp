#include <iostream>

class Base {
 public:
  void func1() { std::cout << "Base class function called." << std::endl; }
};

class Derived : public Base {
 public:
  void func2() { std::cout << "Derived class function called." << std::endl; }
};

int main() {
  Base* basePtr =
      new Derived();  // Base class pointer pointing to derived class object
  basePtr->func1();   // Calls the base class function
  // basePtr->func2(); // This line would cause a compilation error since
  // func2() is not in Base class
  delete basePtr;  // Clean up memory
  return 0;
}