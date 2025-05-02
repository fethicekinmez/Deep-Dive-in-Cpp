#include <iostream>

class Rectangle {
 private:
  int width;
  int height;

 public:
  Rectangle(int w, int h) : width(w), height(h) {}
  void display() const {
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
  }
};

int main() {
  std::unique_ptr<Rectangle> rectPtr1(new Rectangle(10, 20));
  rectPtr1->display();

  // std::unique_ptr<Rectangle> rectPtr2 = rectPtr1; // Error: unique_ptr
  // cannotbe copied
  std::unique_ptr<Rectangle> rectPtr2 =
      std::move(rectPtr1);  // Transfer ownership
  rectPtr2->display();

  std::shared_ptr<Rectangle> rectPtr3(new Rectangle(30, 40));
  std::shared_ptr<Rectangle> rectPtr4 = rectPtr3;  // Shared ownership
  rectPtr3->display();
  rectPtr4->display();

  std::cout << "Reference count: " << rectPtr3.use_count() << std::endl;

  return 0;
}