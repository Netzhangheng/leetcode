#include <bits/stdc++.h>
using namespace std;
//注意栈的使用
int main(){
    stack<int> obj;
    int n;
    while(cin>>n){
        if(n==0){
            cout<<0<<endl;
        }else{
            while(n!=0){
                int tmp = n%8;
                obj.push(tmp);
                n = n/8;
            }
            while(!obj.empty()){
                cout<<obj.top();
                obj.pop();
            }
            cout<<endl;
        }
    }
    return 0;
}

/**
#include <stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF)
        printf("%o\n",n);
    return 0;
}

cout<<oct<<n<<endl;
**/
