#include <iostream>

class Base {
 private:
  int baseData;

 public:
  Base() { std::cout << "Base constructor called" << std::endl; }
  void setBaseData(int data) { baseData = data; }
  int getBaseData() { return baseData; }
  ~Base() { std::cout << "Base destructor called" << std::endl; }
};

class Derived : public Base {
 private:
  int derivedData;

 public:
  Derived() { std::cout << "Derived constructor called" << std::endl; }
  void setDerivedData(int data) { derivedData = data; }
  int getDerivedData() { return derivedData; }
  ~Derived() { std::cout << "Derived destructor called" << std::endl; }
  void display() {
    std::cout << "Base Data: " << getBaseData() << std::endl;
    std::cout << "Derived Data: " << getDerivedData() << std::endl;
  }
};

int main() {
  Derived d;
  d.setBaseData(5);
  d.setDerivedData(9);
  d.display();

  return 0;
}