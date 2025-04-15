#include <iostream>

template <typename T>
class Stack{
private:
    T *arr;
    int top;
    int size;
public:
    Stack(int s){
        size = s;
        arr = new T[size];
        top = -1;
    }
    void push(T x);
    T pop();
    void print(){
        for(int i = 0; i <= top; i++){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};
template <typename T>
void Stack<T>::push(T x){
    if(top == size - 1){
        std::cout << "Stack Overflow" << std::endl;
        return;
    }
    arr[++top] = x;
}
template <typename T>
T Stack<T>::pop(){
    if(top == -1){
        std::cout << "Stack Underflow" << std::endl;
        return -1;
    }
    return arr[top--];
}

int main(){

    Stack<int> s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.print();

    s.pop();
    s.print();
    return 0;

}