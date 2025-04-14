#include <iostream>
#include <fstream>

int main(){

    std::ifstream file("test.txt");
    if (!file) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::string string;
    while(!file.eof()){
        file >> string;
        std::cout << string << std::endl;
    }

    file.close();
    return 0;
}