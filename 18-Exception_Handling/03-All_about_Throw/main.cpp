#include <iostream>
#include <exception>

class myException{
public:
    std::string msg;
    myException(std::string message) : msg(message) {}
};

int main(){

    try {
        throw 20;
    } catch (int e) {
        std::cout << "Caught an exception: " << e << std::endl;
    }

    try {
        throw 20.5;
    } catch (double e) {
        std::cout << "Caught an exception: " << e << std::endl;
    }

    try {
        throw "Hello";
    } catch (const char* e) {
        std::cout << "Caught an exception: " << e << std::endl;
    }

    try {
        throw myException("My Exception");
    } catch (myException& e) {
        std::cout << "Caught an exception: " << e.msg << std::endl;
    }

    return 0;
}