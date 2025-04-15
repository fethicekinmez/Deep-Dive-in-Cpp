#include <iostream>

int main(){

    int a = 10;
    int b = 0;
    int c;

    try
    {
        if(b == 0){
            throw 101;
        }
        c = a / b;
        std::cout << "Result: " << c << '\n';
    }
    catch(int e){
        std::cerr << "Error: Division by zero. Error code: " << e << '\n';
    }
}