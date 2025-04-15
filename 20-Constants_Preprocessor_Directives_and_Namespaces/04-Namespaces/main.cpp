#include <iostream>

namespace First{
    void func(){
        std::cout << "Hello from func()" << std::endl;
    }
}

namespace Second{
    void func(){
        std::cout << "Hello from second func()" << std::endl;
    }
}

using namespace First;
int main(){

    First::func();
    func(); // This will call First::func() because of the using directive
    Second::func();
}