#include <iostream>

class Base {
 private:
  int baseData;

 public:
  Base() {
    baseData = 0;
    std::cout << "Base default constructor called" << std::endl;
  }
  Base(int data) {
    baseData = data;
    std::cout << "Base constructor called with data: " << baseData << std::endl;
  }
  void setBaseData(int data) { baseData = data; }
  int getBaseData() { return baseData; }

  ~Base() { std::cout << "Base destructor called" << std::endl; }
};

class Derived : public Base {
 private:
  int derivedData;

 public:
  Derived() {
    derivedData = 0;
    std::cout << "Derived default constructor called" << std::endl;
  }
  Derived(int data) {
    derivedData = data;
    std::cout << "Derived constructor called with data: " << derivedData
              << std::endl;
  }
  Derived(int data0, int data1) : Base(data0) {
    derivedData = data1;
    std::cout << "Base & Derived constructor called with data: " << derivedData
              << std::endl;
  }
  void setDerivedData(int data) { derivedData = data; }
  int getDerivedData() { return derivedData; }

  ~Derived() { std::cout << "Derived destructor called" << std::endl; }
};

int main() {
  Derived d1;
  std::cout << "----------------" << std::endl;
  Derived d2(10);
  std::cout << "----------------" << std::endl;
  Derived d3(20, 30);
  std::cout << "----------------" << std::endl;

  return 0;
}