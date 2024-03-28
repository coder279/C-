//
// Created by user on 2024/3/25.
//
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    // 构造函数
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* node;
public:
    LinkedList(): head(nullptr){};


};