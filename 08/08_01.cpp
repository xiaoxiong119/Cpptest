#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    std::cout << "请输入整数，以-1结束输入：" << std::endl;

    int value;
    while (true) {
        std::cin >> value;
        if (value == -1) {
            break;
        }
        myList.push_back(value);
    }

    if (!myList.empty()) {
        std::cout << "链表中的元素：" << std::endl;
        for (const auto& element : myList) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // 删除第一个和最后一个元素
        if (!myList.empty()) {
            myList.pop_front(); // 删除第一个元素
        }
        if (!myList.empty()) {
            myList.pop_back(); // 删除最后一个元素
        }

        std::cout << "删除第一个和最后一个元素后的链表：" << std::endl;
        for (const auto& element : myList) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "链表为空。" << std::endl;
    }

    return 0;
}
