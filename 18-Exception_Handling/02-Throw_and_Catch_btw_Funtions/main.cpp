#include <iostream>

int division(int a, int b) {
    if (b == 0) {
        throw 101; // Throwing an exception
    }
    return a / b;
}

int main(){

    int a = 10;
    int b = 0;
    int c;
    try
    {
        if(b == 0){
            throw 101;
        }
        c = division(a, b); // Calling the function that may throw an exception
        std::cout << "Result: " << c << '\n';
    }
    catch(int e){
        std::cerr << "Error: Division by zero. Error code: " << e << '\n';
    }
    
    return 0;
}