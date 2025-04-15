#include <iostream>

class Demo{
private:
    int* p; // Declare p as a member variable

public:
    Demo(){
        p = new int[10]; // Initialize p in the constructor
        std::cout << "Constructor called" << std::endl;
    }
    ~Demo(){
        delete []p; // Delete the memory allocated in the constructor
        std::cout << "Destructor called" << std::endl;
    }
};

void func(){
    Demo d;
}
void func2(){
    Demo* d = new Demo();
    // Destructor will not be called here
    // because we are not deleting the object
    // Destructor will be called when the program ends

    delete d; // Destructor will be called here
}

int main(){

    func();

    func2();


}