#include<iostream>
using namespace std;
int main(){
    int x,m,t=0;
    cout << "输入要反向输出的整数:" << endl;
    cin >> x;
    do
    {
        m=x%10;//整除取最后一位
        cout << m;
        t++;
        x/=10;/* code */
    } while (x>0/* condition */);
    cout << endl;
    cout << "该整数的位数是：" << t << endl;
    
}