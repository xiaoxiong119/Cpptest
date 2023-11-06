#include <iostream>

// 函数定义：将n个盘子从柱子from移动到柱子to，借助柱子temp
void hanoi(int n, char from, char to, char temp, int &count) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << from << " to " << to << std::endl;
        count++;
        return;
    }

    hanoi(n - 1, from, temp, to, count);
    std::cout << "Move disk " << n << " from " << from << " to " << to << std::endl;
    count++;
    hanoi(n - 1, temp, to, from, count);
}

int main() {
    int n;
    std::cout << "Enter the number of disks: ";
    std::cin >> n;

    int count = 0;
    hanoi(n, 'A', 'C', 'B', count);
    
    std::cout << "Total moves: " << count << std::endl;

    return 0;
}
