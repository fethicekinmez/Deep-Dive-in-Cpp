#include <iostream>

class MyException1 {
public:
    MyException1() {}
};

class MyException2 : public MyException1 {
public:
    MyException2() {}
};


int main(){
    try {
        throw 'a';
    } 
    catch (int e) {
        std::cout << "Caught int: " << e << std::endl;
    } 
    catch (double e) {
        std::cout << "Caught double: " << e << std::endl;
    }
    catch (...) {
        std::cout << "Caught something else" << std::endl;
    }


    try
    {
        throw MyException1();
    }
    catch(MyException2 e)
    {
        std::cout << "Caught MyException2" << std::endl;
    }
    catch(MyException1 e)
    {
        std::cout << "Caught MyException1" << std::endl;
    }
    

    return 0;
}