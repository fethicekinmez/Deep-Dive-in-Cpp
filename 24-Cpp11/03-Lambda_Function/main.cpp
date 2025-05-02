#include <iostream>

int main() {
  int a = [](int x, int y) -> int { return x + y; }(
                               5, 10);  // Lambda function to add two numbers

  [a]() {
    std::cout << "Sum is : " << a << std::endl;
  }();  // Lambda function to print the sum

  auto lambda = [](int x, int y) -> int {
    return x + y;
  };  // Lambda function to add two numbers
  std::cout << "Sum is : " << lambda(5, 10)
            << std::endl;  // Call the lambda function
}