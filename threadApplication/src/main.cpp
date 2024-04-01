//
// Created by user on 2024/4/1.
//
#include <iostream>
#include <thread>

void threadFunction() {
    std::cout << "Hello From thread!" << std::endl;
}

int main() {
    //创建子线程
    std::thread t(threadFunction);
    t.join(); //等待子线程结束
    std::cout << "Hello from main thread!" << std::endl;

    //创建并行线程
    std::thread ts(threadFunction);
    ts.detach();
    std::cout << "Hello from detaching thread!" << std::endl;

    return 0;
}
