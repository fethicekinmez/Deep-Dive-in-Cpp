#include <iostream>

class Parent {
 public:
  virtual void show() final {
    std::cout << "Parent class show function" << std::endl;
  }
};
class Child : public Parent {
 public:
  /*
   void show() override {
     std::cout << "Child class show function" << std::endl;
   }
     */
  // The above function will cause a compilation error because the show function
  // in Parent class is marked as final
};

int main() {
  Parent* p = new Parent();
  p->show();  // Calls Parent class show function
  delete p;
}