#include <iostream>
#include <fstream>

void appendSmt(){
    std::ofstream file("test.txt", std::ios::app);

    if(!file){
        std::cerr << "Error opening file" << std::endl;
        return;
    }
    file << "This is a test for appending." << std::endl;

    file.close();
}

int main(){

    std::ofstream file("test.txt");

    if(!file){
        std::cerr << "Error opening file" << std::endl;
        return 0;
    }
    file << "Hello World!" << std::endl;
    file << "This is a test." << std::endl;

    appendSmt();
    

    file.close();

}