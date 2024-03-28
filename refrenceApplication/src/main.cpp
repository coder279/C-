#include <iostream>
#include <vector>

using namespace std;

void modifyValueByReference(int &ref) {
    ref = 10;
}

void modifyValueByPointer(int *ptr) {
    *ptr = 20;
}

void printValue(const int &value) {
    cout << "Value:" << value << endl;
}

void processData(const vector<int> &data) {
    for (int value: data) {
        cout << value << " ";
    }
    cout << endl;
}

int& getSomeValue(){
    static int value = 10;
    return value;
}
void greet(string name = "Hello"){
    cout << "Hello, " << name << endl;
}
int main() {
    int value = 5;

    // 使用引用修改值
    cout << "Original value: " << value << endl;
    modifyValueByReference(value);
    cout << "Value after modification by reference: " << value << endl;

    // 使用指针修改值
    int newValue = 5;
    int *ptr = &newValue;
    cout << "Original value: " << *ptr << endl;
    modifyValueByPointer(ptr);
    cout << "Value after modification by pointer: " << *ptr << endl;
    //delete ptr; 因为使用栈上指针所以不需要释放内存，只有使用动态内存才释放内存
    int number = 8;
    printValue(number);
    vector<int> numbers = {1,2,3,4,5,6,7,8};
    processData(numbers);

    //引用变量
    int& ref = getSomeValue();
    cout << "Value before modification: "<< ref << endl;
    ref = 20;
    cout << "Value after modification: "<< ref << endl;
    return 0;
}
