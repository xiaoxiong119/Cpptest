#include <iostream>

// Circle 类的定义
class Circle {
private:
    double radius;  // 私有成员变量：半径

public:
    // 构造函数
    Circle(double r) : radius(r) {}

    // 成员函数：计算面积
    double calculateArea() {
        return 3.14 * radius * radius;
    }

    // 成员函数：计算周长
    double calculatePerimeter() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    // 创建 Circle 类的对象
    double radiusValue;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radiusValue;

    Circle myCircle(radiusValue);  // 使用构造函数初始化对象

    // 调用成员函数计算面积和周长
    double area = myCircle.calculateArea();
    double perimeter = myCircle.calculatePerimeter();

    // 显示结果
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Perimeter of the circle: " << perimeter << std::endl;

    return 0;
}
