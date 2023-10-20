#include<iostream>
using namespace std;
int main(){
    cout << "请输入金字塔的行数：" << endl;
    int n,m=1,y;//给m定义初值1，金字塔的层数最少为1
    cin >> n;
    while (m<=n){//定义外层循环
        for (y=1;y<=n-m;y++){//打印空格
            cout <<" ";
        }
        for (y=1;y<=2*m-1;y++){//打印*
            cout << "*";
        }
    cout << endl;
    m++;//防止死循环
    }

}