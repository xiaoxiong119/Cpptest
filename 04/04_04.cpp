#include <iostream>

int main() {
    std::string input;

    // 获取用户输入
    std::cout << "请输入一段话：";
    std::getline(std::cin, input);
    //读取一行文本，并将其存储到名为 input 的字符串变量中

    // 大小写互换
    for (char &c : input) {//遍历字符串input中的每个字符
        if (c >= 'a' && c <= 'z') {
            // 小写字母转换为大写
            c = c - 'a' + 'A';
        } else if (c >= 'A' && c <= 'Z') {
            // 大写字母转换为小写
            c = c - 'A' + 'a';
        }
    }

    // 输出结果
    std::cout << "大小写互换后的结果：" << input << std::endl;

    return 0;
}
