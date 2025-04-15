#include <iostream>

class Demo {
    int x;
    int y;
public:
    Demo(int a, int b) : x(a), y(b) {} // Constructor
    void show() const { // Const member function
        //++x; // This will cause a compilation error because x is not mutable
        //++y; // This will cause a compilation error because y is not mutable
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};


int main(){

    Demo obj(10, 20);
    obj.show(); // Output: x: 10, y: 20

    return 0;
}