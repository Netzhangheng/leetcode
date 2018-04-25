#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,length,k;
    int all[1000];
    while(cin>>n){
        for(i=0;i<n;i++)
            cin>>all[i];
        cin>>k;
        sort(all,all+n);

        //»•÷ÿ
        length = 0;
        for(i=0;i<n;i++){
            while(i<n-1 && all[i]==all[i+1])
                i++;
            all[length++] = all[i];
        }
        // ‰≥ˆ
        cout<<all[k-1]<<endl;
    }
    return 0;
}
