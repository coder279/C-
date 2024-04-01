//
// Created by user on 2024/3/31.
//

#ifndef STLAPPLICATION_STLSTRING_H
#define STLAPPLICATION_STLSTRING_H

#include <iostream>
#include <string>

class stlString {

private:
    std::string str1 = "Hello, world!";
public:
    stlString(std::string str) : str1(str) {}

    void print() {
        std::cout << "str1: " << str1 << std::endl;
    }

    std::string update(const std::string str) {
        std::string str2;
        str2 = str + "update";
        return str2;
    }

};


#endif //STLAPPLICATION_STLSTRING_H
