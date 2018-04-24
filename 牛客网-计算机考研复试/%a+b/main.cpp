//解题思路
//112300 和 123 经过反转为003211 和321
//再经过字符串等长转为 003211 和 321000
//依次相加和进位，最后结果是324211，在反序输出即可！！！

#include <bits/stdc++.h>
using namespace std;
char a[1001],b[1001];
int res[1001];

//将字符串反转，方便后面的计算
void Reverse(char *s,int n){
    for(int i=0,j=n-1; i<j ; i++,j--){
        char c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}
//使得俩个字符串等长，方便相加
int sameLength(){
    int al=strlen(a);
    int bl=strlen(b);
    Reverse(a,al);
    Reverse(b,bl);
    if(al>bl){
        for(int i=bl;i<al;i++)
            b[i]='0';
        return al;
    }else{
        for(int i=al;i<bl;i++)
            a[i]='0';
        return bl;
    }
}

int main(){
    int j,l;
    while(cin>>a>>b){
        j=0;
        l = sameLength();
        for(int i=0;i<l;i++){
            //计算顺序不能弄反了
            res[i] = ((a[i]-'0')+(b[i]-'0')+j)%10;
            j = ((a[i]-'0')+(b[i]-'0')+j)/10;
        }
        if(j!=0)
            res[l++] = j;
        for(int i=l-1;i>=0;i--)
            cout<<res[i];
        cout<<endl;
    }
    return 0;
}
