//
// Created by user on 2024/3/27.
//

#include <iostream>
#include <vector>

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
    friend std::ostream &operator<<(std::ostream &os, const MyClass &obj) {
        os << "MyClass object with data: " << obj.data;
        return os;
    }
};

class MyArray {
private:
    int arr[5];
public:
    int &operator[](int index) {
        if (index < 0 || index >= 5) {
            std::cerr << "Index out of range!" << std::endl;
            // 返回一个临时的引用，用于错误处理
            return arr[0];
        }
        return arr[index];
    }
};

void *operator new(size_t size) {
    cout << "Custom new size: " << size << endl;
    void *ptr = malloc(size);
    if (!ptr) {
        throw bad_alloc();
    }
    return ptr;
}

void operator delete(void *ptr) noexcept {
    cout << "Custom delete " << endl;
    free(ptr);
}

//实现内存池
class MemoryPool {
private:
    std::vector<void *> memoryBlocks;
    std::vector<void *> freeBlocks;
    size_t blockSize;

public:
    MemoryPool(size_t blockSize, size_t numBlocks) : blockSize(blockSize) {
        for (size_t i = 0; i < numBlocks; ++i) {
            void *block = malloc(blockSize);
            memoryBlocks.push_back(block);
            freeBlocks.push_back(block);
        }
    }

    ~MemoryPool() {
        // 释放所有内存块
        for (void *block: memoryBlocks) {
            std::free(block);
        }
    }

    void *allocate() {
        if (freeBlocks.empty()) {
            return nullptr; // 内存池已满
        }
        void *block = freeBlocks.back();
        freeBlocks.pop_back();
        return block;
    }

    void deallocate(void *block) {
        freeBlocks.push_back(block);
    }

};

class BaseClass {
public:
    void display() {
        std::cout << "This is BaseClass" << std::endl;
    }
};

class DerivedClass : public BaseClass {
public:
    void display() {
        std::cout << "DerivedClass" << std::endl;
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

    MyArray arr{};
    // 设置数组元素的值
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 2;
    }
    // 访问并打印数组元素的值
    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
    // 测试越界访问
    std::cout << "Attempting to access arr[10]..." << std::endl;
    std::cout << "arr[10] = " << arr[10] << std::endl;

    // 使用重载的 new 和 delete 运算符分配和释放内存
    int *p = new int(42);
    delete p;

    //实现内存池
    MemoryPool pool(sizeof(int), 10);
    //分配内存
    std::vector<void *> ptrs;
    int intValue = 10;
    double doubleValue = 3.14;
    // 向 vector 中添加指针
    ptrs.push_back(&intValue);
    ptrs.push_back(&doubleValue);

    // 从 vector 中获取指针，并进行类型转换
    int *ptrToInt = static_cast<int *>(ptrs[0]);
    auto *ptrToDouble = static_cast<double *>(ptrs[1]);

    // 输出指针指向的数据
    std::cout << "Value of intValue: " << *ptrToInt << std::endl;
    std::cout << "Value of doubleValue: " << *ptrToDouble << std::endl;

    int i = 10;
    double b = static_cast<double>(i);
    std::cout << b << std::endl;

    DerivedClass obje;
    //调用子类的成员函数
    obje.display();
    //调用父类的成员函数
    obje.BaseClass::display();

    return 0;
}