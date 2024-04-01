//
// Created by user on 2024/3/31.
//
#include <iostream>

template<typename T>
T sum(T a, T b) {
    return a + b;
}

// Print输出函数
template<typename T>
void print(T value) {
    std::cout << value << std::endl;
}

// Print输出函数具象化
template<>
void print<char *>(char *value) {
    std::cout << "char: " << value << std::endl;
}

template<typename ...Args>
using print_separator = std::common_type_t<Args...>;

// 可变参数模板，打印所有参数
template<typename... Args>
void printAll(Args... args) {
    std::cout << "Print All: ";
    (std::cout << ... << args) << std::endl;
}

// 重载版本，带有分隔符
template<typename... Args>
void printAll(const print_separator<Args...> &separator, Args... args) {
    std::cout << "Print All with Separator: ";
    ((std::cout << args << separator), ...) << std::endl;
}

template<typename T>
class Base {
public:
    T data;

    Base(T d) : data(d) {}

    virtual void display() {
        std::cout << "Basic class: " << data << std::endl;
    }
};

template<typename T>
class Derived : public Base<T> {
public:
    Derived(T d) : Base<T>(d) {}

    void display() {
        std::cout << "Derived: " << this->data << std::endl;
    }
};

int main() {
    int intSum = sum(5, 3);
    double doubleSum = sum(3.5, 2.8);
    const char *stringValue = "Hello";
    std::cout << "Sum of intSum: " << intSum << std::endl;
    std::cout << "doubleSum: " << doubleSum << std::endl;

    //输出内容
    print(intSum);
    print(doubleSum);
    print(stringValue);

    // 创建基类对象
    Base<int> baseObj(10);
    baseObj.display(); // 输出: Base class: 10

    // 创建派生类对象
    Derived<double> derivedObj(3.14);
    derivedObj.display(); // 输出: Derived class: 3.14
    return 0;
}

