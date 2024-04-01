//
// Created by user on 2024/3/31.
//
#include <iostream>
#include <vector>
#include <list>
#include <utility>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>

int main() {
    //创建一个Vector
    // std::vector<int>();
    //创建一个带有初始值的vector
    std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //std::vector<int> myVector(10, 0);
    int value = myVector[0];

    int exsit = myVector.at(0);
    std::cout << exsit << std::endl;

    //声明首尾数据
    int firstElement = myVector.front();
    int lastElement = myVector.back();
    std::cout << firstElement << std::endl;
    std::cout << lastElement << std::endl;

    //在尾部插入元素
    myVector.push_back(6);
    //在指定位置插入元素
    myVector.insert(myVector.begin() + 2, 7);
    //删除尾部元素
    myVector.pop_back();
    //删除指定位置元素
    myVector.erase(myVector.begin() + 3);

    // 获取迭代器
    auto it = myVector.begin(); // 返回指向第一个元素的迭代器
    auto end = myVector.end(); // 返回指向尾元素的下一个位置的迭代器
    for (; it != end; ++it) {
        std::cout << *it << " "; // 输出当前元素的值
    }
    auto rit = myVector.rbegin();
    auto rend = myVector.rend();
    for (; rit != rend; ++rit) {
        std::cout << *rit << " "; // 输出当前元素的值
    }
    // 改变容器的大小
    myVector.resize(15); // 将容器大小调整为15，多出的部分用默认值初始化

    // 交换两个容器的内容
    std::vector<int> anotherVector = {10, 20, 30};
    myVector.swap(anotherVector);

    //==========================================List=============================
    std::list<int> mylist;
    mylist = {1, 2, 3, 4, 5};

    // 使用迭代器遍历 list
    for (auto itl = mylist.begin(); itl != mylist.end(); ++itl) {
        std::cout << *itl << " "; // 输出当前元素的值
    }
    //插入和删除元素
    mylist.push_back(6); //末尾插入

    mylist.push_front(9);

    std::cout << std::endl;

    //==========================================Pair=============================
    //创建一个键值对
    std::pair<int, std::string> myPair(42, "Hello");

    //访问键值对的第一个和第二个值
    int firstValue = myPair.first;
    std::string secondValue = myPair.second;

    std::cout << firstValue << std::endl;
    std::cout << secondValue << std::endl;

    myPair.first = 100;
    myPair.second = "World";

    std::cout << firstValue << std::endl;
    std::cout << secondValue << std::endl;

    //=============================红黑树============================
    std::map<int, std::string> myMap;
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";

    std::cout << "Map contents:" << std::endl;
    for (const auto &pair: myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // 使用 std::set 实现红黑树
    std::set<int> mySet;
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(2);

    std::cout << "Set contents:" << std::endl;
    for (const auto &element: mySet) {
        std::cout << element << std::endl;
    }
    //==========================================Map=============================
    std::map<int, std::string> ourMap = {{1, "10"},
                                         {2, "20"},
                                         {3, "30"}};
    ourMap.insert(std::make_pair(4, "40"));
    ourMap[5] = "50";
    std::cout << ourMap[2] << std::endl;
    //查找键是否存在
    auto i = ourMap.find(3);
    if (i != ourMap.end()) {
        std::cout << "Found: " << i->second << std::endl;
    }
    ourMap.erase(3);

    //删除指定位置的元素
    auto j = ourMap.find(4);
    if (j != ourMap.end()) {
        ourMap.erase(j);
    }
    ourMap.clear();

    //==========================================哈希表=============================
    std::unordered_map<int, std::string> thisMap;
    thisMap[1] = "One";
    thisMap[2] = "Two";
    thisMap[3] = "Three";
    std::cout << "Map contents:" << std::endl;
    for (const auto &pair: myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    //===========================================无序集合=============================
    // 使用 std::unordered_set 实现哈希集合
    std::unordered_set<int> thisSet;
    thisSet.insert(3);
    thisSet.insert(1);
    thisSet.insert(2);

    std::cout << "Set contents:" << std::endl;
    for (const auto &element: thisSet) {
        std::cout << element << std::endl;
    }
    //==========================================Queue=============================
    std::queue<int> myQueue;
    // 向队尾插入元素
    myQueue.push(10);
    myQueue.push(20);

    // 访问队头元素
    int frontElement = myQueue.front();

    // 弹出队头元素
    myQueue.pop();


}