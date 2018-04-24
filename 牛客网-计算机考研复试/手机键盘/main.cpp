#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[101];
    int up,now;
    int t;
    //pqrs 和 wxyz是四个连在一起的,坑爹不坑爹
    while(cin>>a){
        up=-4;
        t=0;
        for(int i=0;i<strlen(a);i++){
            if(a[i]<'p'){
                now = (a[i]-'a')/3;
                t+=(a[i]-'a')%3+1;
            }else if(a[i]<'t'){
                now = -1;
                t+=(a[i]-'p')+1;
            }else if(a[i]<'w'){
                now = -2;
                t+=(a[i]-'t')+1;
            }else{
                now = -3;
                t+=(a[i]-'w')+1;
            }
            if(up==now)
                t+=2;
            up = now;
        }
        cout<<t<<endl;
    }
    return 0;
}
