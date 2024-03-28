//
// Created by user on 2024/3/27.
//

#include <iostream>

using namespace std;

class Vector {
private:
    double x, y;
public:
    Vector(double _x, double _y) : x(_x), y(_y) {}

    //重载加法运算符
    Vector operator*(const Vector &other) const {
        return {x * other.x, y * other.y};
    }

    bool operator==(const Vector &other) const {
        return x == other.x && y == other.y;
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }

};

class MyClass {
private:
    int data;
public:
    MyClass(int d) : data(d) {}

    // 重载左移运算符
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "MyClass object with data: " << obj.data;
        return os;
    }
};

int main() {
    Vector v1(1, 2);
    Vector v2(3, 4);

    Vector result = v1 * v2; // 使用重载的+ -运算符

    cout << "Vector v1: ";
    v1.display();

    cout << "Vector v2: ";
    v2.display();

    cout << "Result of v1 * v2: ";
    result.display();

    bool c = v1 == v2;
    c ? cout << "Result of v1" << endl : cout << "Result of v2" << endl;

    MyClass obj(42);
    cout << obj << endl; // 使用重载的左移运算符输出对象
    return 0;
}