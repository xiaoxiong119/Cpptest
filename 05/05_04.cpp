#include <iostream>
#include <string>

class Student {
private:
    std::string name;    // 学生姓名
    std::string className; // 班级
    int studentID;        // 学号
    double score;         // 分数

public:
    // 静态变量，用于统计对象总数
    static int count;

    // 构造函数，用于初始化学生信息
    Student(const std::string& n, const std::string& cls, int id, double s)
        : name(n), className(cls), studentID(id), score(s) {
        // 每次创建对象时增加 count
        count++;
    }

    // 成员函数：显示学生信息和成绩
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Student ID: " << studentID << std::endl;
        std::cout << "Score: " << score << std::endl;
        displayGrade();  // 调用显示成绩的函数
        std::cout << "------------------------" << std::endl;
    }

    // 成员函数：根据分数输出成绩
    void displayGrade() {
        char grade;

        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else {
            grade = 'D';
        }

        std::cout << "Grade: " << grade << std::endl;
    }
};

// 初始化静态变量 count
int Student::count = 0;

int main() {
    // 创建 Student 类的对象
    Student student1("John Doe", "Class A", 12345, 92.5);
    Student student2("Jane Smith", "Class B", 67890, 78.0);
    Student student3("Bob Johnson", "Class C", 54321, 88.5);

    // 显示学生信息
    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();

    // 输出对象总数
    std::cout << "Total number of students: " << Student::count << std::endl;

    return 0;
}
