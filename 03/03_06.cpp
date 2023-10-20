#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,delta,x1,x2;
    cout << "请输入二元一次方程组的三个参数：" << endl;
    cin >> a >> b >> c;
    if (a==0){
        cout << "a不能为0！" << endl;
    }
    else{
        delta=b*b-4*a*c;
        if (delta > 0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            cout << "方程有两个不同实根，分别为：" << x1 << "和"<< x2 << endl;
        }
        else if (delta<0){
                cout << "方程无实数根" << endl;
            }
            else{
                x1=x2=(-b)/(2*a);
                cout << "方程有两个相同实根，他们都为：" << x1 <<endl;
        }
    }
    return 0;
}