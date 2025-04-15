#include <iostream>

class Test2;
class Test{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void func(); // friend function
    friend class Test2; // friend class
};

void func(){
    Test t;
    t.a = 1;
    t.b = 2;
    t.c = 3;
    std::cout << t.a << std::endl;
    std::cout << t.b << std::endl;
    std::cout << t.c << std::endl;
}

class Test2{
    public:
        Test t;
        void func(){
            Test t;
            t.a = 10;
            t.b = 20; 
            t.c = 30; 
            std::cout << t.a << std::endl;
            std::cout << t.b << std::endl;
            std::cout << t.c << std::endl;
        }
};

int main(){
    func();

    Test2 t2;
    t2.func();
}