#include<iostream>
using namespace std;
int add(int t){
    int sum;
    if (t<=2)
    {
        sum=1;/* code */
    }
    else
    {
        sum=add(t-1)+add(t-2);/* code */
    }
    return sum;
    
}
int main(){
    int n,a[20];
    cout << "请输入测试数据：";
    
}