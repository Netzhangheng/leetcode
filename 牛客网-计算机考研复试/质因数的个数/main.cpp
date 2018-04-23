#include <bits/stdc++.h>
using namespace std;

//注意从2开始依次增大进行乘法，一个数的最大公约数必然小于n的平方
//当最后n依旧大于1则说明是一个质数，加1即可
int main(){
    long n;
    int s;
    while(cin>>n){
        s = 0;
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                s++;
                n/=i;
            }
        }
        if(n>1) s++;
        cout<<s<<endl;
    }
    return 0;
}
