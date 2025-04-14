#include <iostream>
#include <fstream>

class Student{
public:
    std::string name;
    int rollNo;
    std::string branch;

    Student() : name(""), rollNo(0), branch(""){} 
    Student(std::string name, int rollNo, std::string branch) : name(name), rollNo(rollNo), branch(branch){}

    friend std::ofstream & operator<<(std::ofstream &out, const Student &s){
        out << std::endl << s.name << " " << s.rollNo << " " << s.branch;
        return out;
    }
    friend std::ifstream & operator>>(std::ifstream &in, Student &s){
        in >> s.name >> s.rollNo >> s.branch;
        return in;
    }

};

int main(){

    Student s1("John", 123, "ComputerScience");
    Student s2("Jane", 456, "Mathematics");

    std::ofstream out("example.txt");
    if(!out){
        std::cerr << "Error opening file for writing" << std::endl;
        return 1;
    }
    out << s1;
    out << s2;
    out.close();

    std::ifstream in("example.txt");
    if(!in){
        std::cerr << "Error opening file for reading" << std::endl;
        return 1;
    }

    Student s3;

    while(!in.eof())
    {
        in >> s3;
        std::cout << "Name: " << s3.name << std::endl;
        std::cout << "Roll No: " << s3.rollNo << std::endl;
        std::cout << "Branch: " << s3.branch << std::endl;
        std::cout << "------------------------" << std::endl;
    }
    
    in.close();






    return 0;
}