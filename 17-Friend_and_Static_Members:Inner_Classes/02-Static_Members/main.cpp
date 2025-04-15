#include <iostream>
using namespace std;
// Static members are shared by all objects of the class
class Test{
public:
    int a;
    static int count;

    Test(){
        a = 99;
        count++;
    }

    static void showCount(){
        cout << "Count: " << count << endl;
    }
};

int Test::count = 0; // static int Test::count = 0; // This is another way to initialize static members
int main(){

    cout << "Static member count: " << Test::count << endl; // 0
    Test t1;
    cout << "Static member count: " << Test::count << endl; // 1
    Test t2;
    cout << "Static member count: " << Test::count << endl; // 2
    Test t3;
    t3.showCount(); // 3
    

}