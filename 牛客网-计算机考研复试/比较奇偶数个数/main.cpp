#include <bits/stdc++.h>
using namespace std;

int main(){
    int ji,ou,n,tmp;
    while(cin>>n){
        ji=ou=0;
        for(int i=0;i<n;i++){
            cin>>tmp;
            if(tmp%2==0) ou++;
            else ji++;
        }
        if(ou>ji) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
