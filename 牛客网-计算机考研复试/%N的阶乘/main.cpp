/**
1. 特别大的数相乘，一定要学会拆开分步解决
2. xxx5 xxx4 xxx3 xxx2 xxx1 * i;
3. 观察乘法的特性，xxx1与i相乘/10000是需要进位的值，再%10000则是当前四位的值
4. xxx2*+进位的值,后续同2.
5. 输出时除了最前面四位,后面每次输出后面都要添加4个0
**/


#include <bits/stdc++.h>
using namespace std;

int res[10000];
void factorial(const int n){
    int i,j,carry,bit;
    bit=carry=0;
    res[0] = 1;

    for(i=1;i<=n;++i,carry=0){
        for(j=0;j<=bit;++j){
            res[j] = res[j]*i+carry;
            carry = res[j]/10000;
            res[j]%=10000;
        }
        if(carry) res[++bit] = carry;
    }

    cout<<res[bit];
    for(i=bit-1;i>=0;i--)
        printf("%.4d",res[i]);
    cout<<endl;
}

int main(){
    int n;
    while(cin>>n){
        factorial(n);
    }
    return 0;
}
