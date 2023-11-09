#include <iostream>
#include <cmath>

int main() {
    double number;
    double base;

    // 获取用户输入的数字
    std::cout << "请输入一个正数：";
    std::cin >> number;

    // 检查输入是否合法
    while (number <= 0) {
        std::cout << "请确保输入的是正数，请重新输入：";
        std::cin >> number;
    }

    // 获取用户输入的底数
    std::cout << "请输入底数：";
    std::cin >> base;

    // 检查输入是否合法
    while (base <= 0 || base == 1) {
        std::cout << "请确保底数是正数且不等于1，请重新输入：";
        std::cin >> base;
    }

    // 计算对数并输出结果
    double result = std::log(number) / std::log(base); // 使用换底公式
    std::cout << "以 " << base << " 为底的对数是：" << result << std::endl;

    return 0;
}
