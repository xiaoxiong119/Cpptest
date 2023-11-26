#include <iostream>

// Point 类的定义
class Point {
private:
    double x, y;  // 私有成员变量：x 和 y 坐标

public:
    // 构造函数，使用点坐标进行初始化
    Point(double xVal, double yVal) : x(xVal), y(yVal) {}

    // 成员函数：显示点的坐标
    void display() {
        std::cout << "Point Coordinates: (" << x << ", " << y << ")" << std::endl;
    }

    // 成员函数：更改点的坐标
    void setCoordinates(double newX, double newY) {
        x = newX;
        y = newY;
    }
};

// Rectangle 类的定义，公有继承自 Point 类
class Rectangle : public Point {
private:
    double length, width;  // 私有成员变量：矩形的长度和宽度

public:
    // 构造函数，使用点坐标、长、宽进行初始化
    Rectangle(double xVal, double yVal, double lengthVal, double widthVal)
        : Point(xVal, yVal), length(lengthVal), width(widthVal) {}

    // 成员函数：计算矩形的面积
    double calculateArea() {
        return length * width;
    }

    // 成员函数：计算矩形的周长
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // 创建 Point 类的对象
    Point myPoint(2.5, 3.0);

    // 显示点的坐标
    myPoint.display();

    // 更改点的坐标
    myPoint.setCoordinates(4.0, 5.5);
    myPoint.display();

    // 创建 Rectangle 类的对象
    Rectangle myRectangle(1.0, 2.0, 3.0, 4.0);

    // 计算矩形的面积和周长
    double area = myRectangle.calculateArea();
    double perimeter = myRectangle.calculatePerimeter();

    // 显示结果
    std::cout << "Rectangle Area: " << area << std::endl;
    std::cout << "Rectangle Perimeter: " << perimeter << std::endl;

    return 0;
}
