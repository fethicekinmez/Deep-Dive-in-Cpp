#include <iostream>
#include <vector>

int main() {
  std::vector<int> v1 = {1, 2, 3, 4, 5};
  v1.push_back(6);
  v1.push_back(7);
  std::cout << "The elements in the vector are: ";
  for (int x : v1) {
    std::cout << x << " ";
  }
  std::cout << std::endl;
  v1.pop_back();  // Remove the last element

  std::vector<int>::iterator it;
  for (it = v1.begin(); it != v1.end(); ++it) {
    std::cout << *it << " ";
  }

  return 0;
}