//
// Created by user on 2024/3/26.
//

#include "Copy.h"

DeepCopy::DeepCopy(const char *str) {
    buffer = new char[strlen(str) + 1];
    strcpy(buffer, str);
}
// 对象拷贝的时候调用--深拷贝
DeepCopy::DeepCopy(const DeepCopy &other) {
    buffer = new char[strlen(other.buffer) + 1];
    strcpy(buffer, other.buffer);
}

DeepCopy::~DeepCopy() {
    delete[] buffer;
}

void DeepCopy::display() const {
    cout << "Buffer: " << buffer << endl;
}

ShallowCopy::ShallowCopy(const char *str) {
    buffer = new char[strlen(str) + 1];
    strcpy(buffer, str);
}
// 对象拷贝的时候调用--浅拷贝
ShallowCopy::ShallowCopy(const ShallowCopy &other) {
    buffer = other.buffer;
}

ShallowCopy::~ShallowCopy() {
    //delete[] buffer;
}

void ShallowCopy::display() {
    cout << "Buffer: " << buffer << endl;
}
