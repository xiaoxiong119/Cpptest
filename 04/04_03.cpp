#include <iostream>

int main() {
    double number;

    // 获取用户输入的数字
    std::cout << "请输入一个正数：";
    std::cin >> number;

    // 检查输入是否合法
    while (number <= 0) {
        std::cout << "请确保输入的是正数，请重新输入：";
        std::cin >> number;
    }

    // 计算以 e 为底的对数并输出结果
    double base = 2.71828; // e 的近似值
    double result = 0.0;
    double epsilon = 1e-6; // 定义一个小的误差范围

    // 使用循环来模拟对数计算过程
    while (number > 1 + epsilon) {
        number /= base; // 不断除以底数
        result += 1.0;   // 累加计数器
    }

    std::cout << "以 e 为底的对数是：" << result << std::endl;

    return 0;
}
