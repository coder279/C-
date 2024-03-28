//
// Created by user on 2024/3/26.
//
#include <iostream>

using namespace std;

void greet(string name = "example") {
    cout << "Hello " << name << endl;
}

template<typename T>
T add(T a, T b) {
    return a + b;
}
// 编译的时候减少函数调用的开销
inline int sub(int a, int b) {
    return a - b;
}

int main() {
    //函数默认值
    greet();
    greet("Letter");
    //函数重载
    cout << "Sum of integers: " << add(5, 3) << endl;
    //函数内联
    cout << "Sub of integers: " << sub(5, 3) << endl;
    return 0;
}