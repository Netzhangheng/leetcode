#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int n2;
    bool status;
    while(cin>>n){
        status = true;
        n2 = n*n;
        while(n!=0){
            if(n2%10 != n%10){
                status = false;
                break;
            }
            n/=10;
            n2/=10;
        }
        if(status) cout<<"Yes!"<<endl;
        else cout<<"No!"<<endl;
    }
    return 0;
}
