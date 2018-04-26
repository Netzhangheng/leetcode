#include <bits/stdc++.h>
using namespace std;

/**
1. 高位除2，如果余1，则低位加10再除2. 如果是0则低位直接除2
2. 到最后一位时将余数加入数组
3. 再次除时，判断起始位是否为0，0则往后退，如果此时非0位在个位前面，则继续步骤1，否则结束
**/

int main(){
    char a[30];
    int b[30];
    int res[1000];
    int length,resL;
    int i,j,tmp;
    while(cin>>a){
        length = strlen(a);
        for(i=0;i<length;i++)       //转化成整型数组
            b[i] = a[i]-'0';

        for(resL=j=0;j<length;){
            tmp=0;
            for(i=j;i<length-1;i++){
                b[i] += tmp*10;
                tmp = b[i]%2;
                b[i]/=2;
            }
            b[length-1] += tmp*10;
            res[resL++] = b[length-1]%2;
            b[length-1]/=2;

            while(j<length && b[j]==0)
                j++;
        }

        for(int k=resL-1;k>=0;k--)
            cout<<res[k];
        cout<<endl;
    }
    return 0;
}
