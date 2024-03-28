//
// Created by user on 2024/3/26.
//
#include <iostream>
#include <string>
#include "Copy.h"

using namespace std;
struct PersonStruct {
    string name;
    int age;
};

class PersonClass {
public:
    string name;
    int age;

    //构造函数
    PersonClass(const string &name, int age) : name(name), age(age) {
    }

    //成员函数
    void display() {
        cout << "Name: " << name << ", Age:" << age << endl;
    }

    ~PersonClass() {
        cout << "Clean Over" << endl;
    }
};

class MyClass {
private:
    int value;
public:
    MyClass(int value) : value(value) {};

    int getValue() const {
        return this->calculateValue();
    }

    void setValue(int v) {
        this->value = v;
    }

private:
    int calculateValue() const {
        return this->value * 2;
    }
};

class FirstClass {
private:
    int privateMemberCount;

    friend class SecondClass;

public:
    int display() {
        return this->privateMemberCount;
    }
};

class SecondClass {
public:
    void modify(FirstClass &first, int value) {
        first.privateMemberCount = value;
    }

};


int main() {
    PersonStruct personStruct;
    personStruct.name = "John";
    personStruct.age = 30;
    cout << "Using struct: " << personStruct.name << ", " << personStruct.age << endl;

    // 使用类
    PersonClass personClass("Alice", 25);
    personClass.display();

    //拷贝构造函数
    PersonClass personClass2 = personClass;
    personClass2.display();

    //深拷贝与浅拷贝
    // 深拷贝示例
    DeepCopy obj1("Deep Copy Example");
    DeepCopy obj2 = obj1;
    obj1.display();
    obj2.display();

    // 浅拷贝示例
    ShallowCopy obj3("Shallow Copy Example");
    ShallowCopy obj4 = obj3;
    obj3.display();
    obj4.display();

    //const修饰成员函数
    MyClass myClass(20);
    myClass.setValue(30);
    int val = myClass.getValue();
    cout << "val:" << val << endl;

    //友元
    FirstClass f;
    cout << f.display() << endl;
    SecondClass s;
   s.modify(f,20);

    cout << f.display() << endl;

    return 0;


}