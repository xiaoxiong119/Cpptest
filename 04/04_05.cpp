#include <iostream>
#include <vector>

using namespace std;

// 定义学生结构体，包含姓名、平均成绩、班级评议成绩、是否是学生干部、是否是西部省份学生、发表的论文数和奖学金总数
struct Student {
    string name;
    int averageScore;
    int classEvaluation;
    char isStudentLeader;
    char isWesternStudent;
    int paperCount;
    int totalScholarship; // 用于存储每个学生的奖学金总数
};

int main() {
    int N;
    cout << "请输入学生数量：" << endl;
    cin >> N;

    // 创建一个存储学生信息的向量
    vector<Student> students(N);

    // 输入学生数据
    for (int i = 0; i < N; ++i) {
        // 从输入流中读取学生的姓名、平均成绩、班级评议成绩、是否是学生干部、是否是西部省份学生、发表的论文数
        cin >> students[i].name >> students[i].averageScore >> students[i].classEvaluation
            >> students[i].isStudentLeader >> students[i].isWesternStudent >> students[i].paperCount;
    }

    // 计算每个学生的奖学金总数
    for (int i = 0; i < N; ++i) {
        // 计算院士奖学金
        if (students[i].averageScore > 80 && students[i].paperCount >= 1) {
            students[i].totalScholarship += 8000;
        }

        // 计算五四奖学金
        if (students[i].averageScore > 85 && students[i].classEvaluation > 80) {
            students[i].totalScholarship += 4000;
        }

        // 计算成绩优秀奖
        if (students[i].averageScore > 90) {
            students[i].totalScholarship += 2000;
        }

        // 计算西部奖学金
        if (students[i].averageScore > 85 && students[i].isWesternStudent == 'Y') {
            students[i].totalScholarship += 1000;
        }

        // 计算班级贡献奖
        if (students[i].classEvaluation > 80 && students[i].isStudentLeader == 'Y') {
            students[i].totalScholarship += 850;
        }
    }

    // 找出获得最多奖学金的学生
    int maxScholarship = 0;
    string topStudent;

    for (int i = 0; i < N; ++i) {
        // 遍历所有学生，找出奖学金总数最多的学生
        if (students[i].totalScholarship > maxScholarship) {
            maxScholarship = students[i].totalScholarship;
            topStudent = students[i].name;
        }
    }

    // 输出结果
    cout << topStudent << endl; // 输出获得最多奖学金的学生的姓名
    cout << maxScholarship << endl; // 输出该学生获得的奖学金总数

    int totalScholarshipSum = 0;
    for (int i = 0; i < N; ++i) {
        totalScholarshipSum += students[i].totalScholarship; // 计算所有学生获得的奖学金总数
    }
    cout << totalScholarshipSum << endl; // 输出所有学生获得的奖学金总数

    return 0;
}
