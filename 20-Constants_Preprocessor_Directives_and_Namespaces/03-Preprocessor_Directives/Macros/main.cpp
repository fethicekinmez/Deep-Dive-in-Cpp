#include <iostream>

#define PI 3.14
#define c std::cout
#define SQUARE(x) ((x) * (x))


int main(){

    c << PI << std::endl;
    c << SQUARE(5) << std::endl;

}