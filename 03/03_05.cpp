#include<iostream>
using namespace std;
int main(){
    int i,j;
    for (i=200;i<=300;i++){
        for (j=2;j<i;j++){
            if (i%j==0) break; //如果i能被j整除就跳出循环
        }
        if (j==i) cout << j <<endl;
    }
}