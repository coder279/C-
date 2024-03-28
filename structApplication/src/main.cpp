//
// Created by user on 2024/3/24.
//
#define _CRT_SECURE_NO_WARNINGS //C标准增加字符串操作函数

#include <iostream>

using namespace std;
struct st_girl {
    char name[21];
    int age;
    double weight;
    char sex;
    bool syz;
};

struct st_pet {
    string name;
    int age;
};

struct st_boy {
    string name;
    int score[3] = {1, 2, 3};
    int spa[2][3] = {{1, 2, 3},
                     {4, 5, 6}};
};


// generationArr 生成结构体数组
void generationArr() {
    st_girl girls[3];
    memset(girls, 0, sizeof(girls));
    strcpy(girls[0].name, "小满");
    girls[0].age = 20;
    girls[1] = {"西瓜", 20}; //c++11标准
    *(girls + 2) = {"小咪", 1};
    for (int i = 0; i < 3; i++) {
        cout << "输出" << i << "" << girls[i].name << endl;
    }

}

void generationUnion() {
    st_boy stBoy;
    for (int i = 0; i < 3; i++)
        cout << stBoy.score[i] << endl;
    for (int j = 0; j < 2; j++)
        for (int k = 0; k < 3; k++)
            cout << stBoy.spa[j][k] << endl;
}

struct Point2D {
    int x, y;
};

struct Rectangle {
    Point2D topLeft;
    Point2D bottomRight;
};

void generationComplexStruct() {
    Point2D point = {3,4};
    cout << "Point: (" << point.x << ", " << point.y << ")" << endl;
    // 创建一个Rectangle结构体对象
    Rectangle rect = {{1, 2}, {5, 6}};
    // 输出矩形的左上角和右下角坐标
    cout << "Rectangle Top Left: (" << rect.topLeft.x << ", " << rect.topLeft.y << ")" << endl;
    cout << "Rectangle Bottom Right: (" << rect.bottomRight.x << ", " << rect.bottomRight.y << ")" << endl;
}

union UnionRectangle {
    int number;
    char name[21];
};

void GenerationUnion(){
    UnionRectangle unionRectangles;
    cout << "size of union" << sizeof(unionRectangles) << endl;
}

int main() {
    setlocale(LC_ALL, "zh_CN.UTF-8");
    generationArr();
    generationUnion();
    generationComplexStruct();
    return 1;
}