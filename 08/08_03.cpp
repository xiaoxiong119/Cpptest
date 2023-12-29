#include <iostream>
#include <vector>
#include <algorithm>

// 去除重复元素并按升序排序
void uniqueSort(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
    auto last = std::unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());
}

int main() {
    std::vector<int> myVector;

    std::cout << "请输入整数，以-1结束输入：" << std::endl;

    int value;
    while (true) {
        std::cin >> value;
        if (value == -1) {
            break;
        }
        myVector.push_back(value);
    }

    if (!myVector.empty()) {
        std::cout << "容器中的元素：" << std::endl;
        for (const auto& element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;

        // 去除重复元素并按升序排序
        uniqueSort(myVector);

        std::cout << "去除重复元素并按升序排序后的容器：" << std::endl;
        for (const auto& element : myVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "容器为空。" << std::endl;
    }

    return 0;
}
