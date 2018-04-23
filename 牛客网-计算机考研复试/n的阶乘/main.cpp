#include <bits/stdc++.h>
using namespace std;

unsigned long long jiec[21]={0};

unsigned long long getjiec(int n){
    if(!jiec[n])
        jiec[n] = getjiec(n-1)*n;
    return jiec[n];
}
//×¢Òâ½×³Ë·¶Î§¼´¿É
int main(){
    int n;
    jiec[1] = 1;
    while(cin>>n){
        if(n==0)
            cout<<0<<endl;
        else
            cout<<getjiec(n)<<endl;
    }
    return 0;
}
