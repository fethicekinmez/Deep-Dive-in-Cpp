#include <iostream>

int main(){

    const int a = 10; // a is a constant variable
    // a = 20; // This will cause a compilation error because a is declared as const

    int b = 20; // b is a normal variable
    const int *p = &b;
    // ++*p; // This is not allowed because p is a const int pointer to an int
    b = 30;
    std::cout << "Value of b: " << *p << std::endl; // Output: Value of b: 30

    p = &a;
    std::cout << "Value of a: " << *p << std::endl; // Output: Value of a: 10

    int* const ptr = &b;
    std::cout << "Value of b: " << *ptr << std::endl; // Output: Value of b: 30
    // ptr = &a; // This will cause a compilation error because ptr is a const pointer
    return 0;
}