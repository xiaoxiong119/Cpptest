#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "enter a:" << endl;
    cin >> a;
    cout << "enter b:" << endl;
    cin >> b;
    if (a==b)
    {
        cout << "a=b" << endl;
    }
    else if (a>b)
    {
        cout << "a>b" << endl;
    }
    else if (a<b)
    {
        cout << "a<b" << endl;
    }
    return 0;
}