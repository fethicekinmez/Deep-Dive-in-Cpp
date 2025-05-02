#include <iostream>
#include <map>

int main() {
  std::map<int, std::string> myMap;
  myMap.insert({1, "one"});
  myMap.insert({2, "two"});
  myMap.insert({3, "three"});

  std::map<int, std::string>::iterator it;
  for (it = myMap.begin(); it != myMap.end(); ++it) {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
  }

  std::map<int, std::string>::iterator it2;
  it2 = myMap.find(2);
  if (it2 != myMap.end()) {
    std::cout << "Found key 2 with value: " << it2->second << std::endl;
  } else {
    std::cout << "Key 2 not found" << std::endl;
  }

  return 0;
}