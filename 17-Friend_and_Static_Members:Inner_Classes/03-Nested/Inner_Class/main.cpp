#include <iostream>

class Outer {
public:
    int a;
    static int b;
    class Inner {
    public:
        int x;
        Inner() : x(5) {} // Constructor to initialize x
        void display(){
            std::cout << "Inner class value: " << x << std::endl;
            std::cout << "Accessing Outer class static member: " << Outer::b << std::endl;
        }
    };
    Inner innerObj;
    void display() {
        std::cout << "Outer class value: " << a << std::endl;
    }
};

int Outer::b = 10;


int main(){

    Outer outerObj;
    outerObj.a = 20;
    outerObj.display();
    outerObj.innerObj.display();

    return 0;
}