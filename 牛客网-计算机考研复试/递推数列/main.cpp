#include <bits/stdc++.h>
using namespace std;

// a0,a1,p,q
// an = p*a(n-1) + q*a(n-2)

int main(){
    int a0,a1,p,q,k;
    int s;
    int all[1000];
    while(cin>>a0>>a1>>p>>q>>k){
        all[0] = a0;
        all[1] = a1;
        for(int i=2;i<=k;i++){
            all[i] = ((all[i-1]*p)+ (all[i-2]*q))%10000;
        }
        cout<<all[k]<<endl;
    }
    return 0;
}
