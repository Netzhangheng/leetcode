#include <bits/stdc++.h>
using namespace std;
//注意getline是读取到/n时结束，注意有的编译器可能不支持strrev
int main(){
    char a[5];
    while(cin.getline(a,5)){
        for(int i=3;i>=0;i--)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}
