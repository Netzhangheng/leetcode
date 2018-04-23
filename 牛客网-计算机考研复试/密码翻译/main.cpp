#include <bits/stdc++.h>
using namespace std;

// 注意判断Z和判断是不是字母的先后顺序
int main(){
    char a[81];
    int sl;
    while(cin.getline(a,81)){
        sl = strlen(a);
        for(int i=0;i<sl;i++){
            if((a[i] == 'z') || (a[i]=='Z'))
                a[i]-=25;
            if(('A'<=a[i] && a[i]<'Z') || ('a'<=a[i] && a[i]<'z'))
                a[i] += 1;
        }
        cout<<a<<endl;
    }
    return 0;
}
