#include <bits/stdc++.h>
using namespace std;
//upper_bound >
//lower_bound >=
//¿¼²ì¶þ·Ö²éÕÒ

int main(){
    int m,n,tmp;
    int all[100];
    int get[100];
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>all[i];
        cin>>m;
        for(int i=0;i<m;i++)
            cin>>get[i];

        sort(all,all+n);
        for(int i=0;i<m;i++){
            tmp = upper_bound(all,all+n,get[i])-all-1;
            cout<<tmp<<" "<<endl;
            if(all[tmp]!=get[i] && (tmp==n-1 || (all[tmp+1]>get[i])))
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
