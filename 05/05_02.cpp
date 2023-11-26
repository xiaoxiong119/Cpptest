#include <iostream>

class Triangle {
private:
    double side1, side2, side3;  // 三角形的三边长度

public:
    // 构造函数，用于初始化三边长度
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // 成员函数：判断三角形是否为等边三角形
    bool isEquilateral() {
        return (side1 == side2) && (side2 == side3);
    }

    // 成员函数：判断三角形是否为等腰三角形
    bool isIsosceles() {
        return (side1 == side2) || (side1 == side3) || (side2 == side3);
    }

    // 成员函数：判断三角形是否为不等边三角形
    bool isScalene() {
        return (side1 != side2) && (side2 != side3) && (side1 != side3);
    }

    // 打印三角形类型的结果
    void printTriangleType() {
        if (isEquilateral()) {
            std::cout << "The triangle is an equilateral triangle." << std::endl;
        } else if (isIsosceles()) {
            std::cout << "The triangle is an isosceles triangle." << std::endl;
        } else if (isScalene()) {
            std::cout << "The triangle is a scalene triangle." << std::endl;
        } else {
            std::cout << "Invalid triangle sides." << std::endl;
        }
    }
};

int main() {
    // 用户输入三角形的三边长度
    double side1, side2, side3;
    std::cout << "Enter the lengths of the three sides of the triangle:" << std::endl;
    std::cout << "Side 1: ";
    std::cin >> side1;
    std::cout << "Side 2: ";
    std::cin >> side2;
    std::cout << "Side 3: ";
    std::cin >> side3;

    // 创建 Triangle 类的对象并进行判断
    Triangle myTriangle(side1, side2, side3);
    myTriangle.printTriangleType();

    return 0;
}
