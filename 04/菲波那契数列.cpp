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
    int x,m=1;
    cout << "请输入斐波那契数列的行数:" ;
    cin >> x;
    cout << endl;
    while (m<=x/* condition */)
    {
        cout << add(m) << endl;
        m=m+1;/* code */
    }
    
}