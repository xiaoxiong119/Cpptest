#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<int> myDeque;

    while (true) {
        std::string command;
        std::cout << "请输入命令 (push <value>, pop, print, exit)：";
        std::cin >> command;

        if (command == "push") {
            int value;
            std::cin >> value;
            myDeque.push_back(value);
            std::cout << value << " 入队成功。" << std::endl;
        } else if (command == "pop") {
            if (!myDeque.empty()) {
                int frontValue = myDeque.front();
                myDeque.pop_front();
                std::cout << frontValue << " 出队成功。" << std::endl;
            } else {
                std::cout << "队列已空，无法出队。" << std::endl;
            }
        } else if (command == "print") {
            if (!myDeque.empty()) {
                std::cout << "队列中的元素：";
                for (const auto& element : myDeque) {
                    std::cout << element << " ";
                }
                std::cout << std::endl;
            } else {
                std::cout << "队列为空。" << std::endl;
            }
        } else if (command == "exit") {
            std::cout << "程序退出。" << std::endl;
            break;
        } else {
            std::cout << "无效命令，请重新输入。" << std::endl;
        }
    }

    return 0;
}
