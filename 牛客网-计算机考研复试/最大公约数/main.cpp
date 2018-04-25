#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int s;
    while(cin>>a>>b){
        for(int i=1;i<=a/2 && i<=b/2;i++){
            if(a%i==0 && b%i==0)
                s=i;
        }
        cout<<s<<endl;
    }
    return 0;
}
