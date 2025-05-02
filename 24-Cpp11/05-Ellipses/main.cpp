#include <iostream>

int sum(int n, ...) {
  va_list list;
  va_start(list, n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += va_arg(list, int);
  }
  return sum;
}

int main() {
  std::cout << "Sum of 1, 2, 3: " << sum(3, 1, 2, 3) << std::endl;
  std::cout << "Sum of 4, 5, 6, 7: " << sum(4, 4, 5, 6, 7) << std::endl;

  return 0;
}