//
// Created by user on 2024/3/26.
//

#ifndef OBJECTAPPLICATION_COPY_H
#define OBJECTAPPLICATION_COPY_H
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class DeepCopy {
private:
    char *buffer;
public:
    DeepCopy(const char *str);

    // 深拷贝构造函数
    DeepCopy(const DeepCopy &other);

    ~DeepCopy();

    void display() const;
};

class ShallowCopy {
private:
    char *buffer;
public:
    ShallowCopy(const char *str);

    // 浅拷贝构造函数
    ShallowCopy(const ShallowCopy &other) ;

    ~ShallowCopy() ;

    void display() ;
};


#endif //OBJECTAPPLICATION_COPY_H
