//
// Created by user on 2024/3/31.
//
#include <iostream>

using namespace std;

class Shape {
public:
    virtual double calculate() const {
        return 0.0;
    };

    virtual ~Shape() {
        cout << "shape end" << endl;
    }
};

class Circle : public Shape {
private:
    double m_radius;
public:
    Circle(double r) : m_radius(r) {}

    double calculate() const override {
        return 3.1415 * m_radius * m_radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculate() const override {
        return width * height;
    }
};

class Base {
public:
    virtual ~Base() {
        cout << "Base" << endl;
    }
};

class Execution : public Base {
public:
    void execution() {
        cout << "Function of execution" << endl;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape *shapePtr;

    shapePtr = &circle;
    // 使用基类指针调用虚函数，多态性
    cout << "Circle Area: " << shapePtr->calculate() << endl;

    shapePtr = &rectangle;
    cout << "Circle Area: " << shapePtr->calculate() << endl;

    //dynamic使用
    Base *basePtr = new Execution();
    auto *execution = dynamic_cast<Execution *>(basePtr);
    if (execution) {
        execution->execution();
    } else {
        cout << "Dynamic execution" << endl;
    }
    delete execution;
    return 0;
}