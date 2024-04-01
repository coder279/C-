//
// Created by user on 2024/4/1.
//
#include <iostream>
#include <memory>

int main() {
    //独占所有权智能指针
    std::unique_ptr<int> ptr(new int);
    std::cout << *ptr << std::endl;
    //移动所有权
    std::unique_ptr<int> ptr2 = std::move(ptr);
    if (ptr) {
        std::cout << "ptr is not null" << std::endl;
    } else {
        std::cout << "ptr is null" << std::endl;
    }
    //共享所有权只能指针
    std::shared_ptr<int> sptr(new int);
    std::cout << *sptr << std::endl;
    std::shared_ptr<int> sptr2 = sptr;
    // 所有权被共享，引用计数为2
    std::cout << sptr.use_count() << std::endl; // 输出 2

    //弱引用智能指针
    std::shared_ptr<int> sharedPtr(new int(42));
    std::weak_ptr<int> weakPtr = sharedPtr;
    if (auto lockedPtr = weakPtr.lock()) {
        std::cout << *lockedPtr << std::endl;
    } else {
        std::cout << "Object has been destroyed" << std::endl;
    }
    // 手动释放 sharedPtr
    sharedPtr.reset();

    if (auto lockedPtr = weakPtr.lock()) {
        std::cout << *lockedPtr << std::endl; // 不会执行到这里
    } else {
        std::cout << "Object has been destroyed" << std::endl; // 输出 "Object has been destroyed"
    }

    return 0;
}