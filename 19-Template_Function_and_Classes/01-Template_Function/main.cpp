#include <iostream>

// Template function
template<typename T, typename R>
T add(T a, R b) {
    return a + b;
}

int main(){
    // Using the template function with different types
    std::cout << "Sum of 5 and 10: " << add(5, 10.2) << std::endl;
    std::cout << "Sum of 5.5 and 10.5: " << add(5.2, 10.2) << std::endl;

    return 0;
}