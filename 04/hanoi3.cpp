#include <iostream>

// 定义move函数，用于打印移动一块圆盘的动作
void move(int disk, char source, char destination) {
    std::cout << disk << ":" << source << "->" << destination << std::endl;
}

// 递归的hanoi函数，将n个圆盘从源柱子移动到目标柱子，借助辅助柱子
void hanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        // 当只有一个圆盘时，直接移动到目标柱子
        move(n, source, destination);
    } else {
        // 将n个圆盘的上半部分从源柱子经过目标柱子移动到辅助柱子
        hanoi(n / 2, source, destination, auxiliary);
        // 移动第n个圆盘到目标柱子
        move(n, source, destination);
        // 将n个圆盘的上半部分从辅助柱子经过源柱子移动到目标柱子
        hanoi(n / 2, auxiliary, source, destination);
    }
}

int main() {
    int num_disks;
    char source_peg, auxiliary_peg, destination_peg;

//    std::cout << "Enter the number of disks on peg A: ";
    std::cin >> num_disks;

//    std::cout << "Enter the pegs' identifiers (e.g., A B C): ";
    std::cin >> source_peg >> auxiliary_peg >> destination_peg;

    // 调用hanoi函数解决汉诺塔问题
    hanoi(num_disks, source_peg, auxiliary_peg, destination_peg);

    return 0;
}
