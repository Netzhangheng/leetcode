#include <bits/stdc++.h>
using namespace std;

//×¢Òâ¶Ô³ÆÐÔ

int main(){
    int all[101][101];
    int n,i,j;
    bool res;
    while(cin>>n){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++)
                cin>>all[i][j];
        }
        res = true;
        for(i=1;i<=n;i++)
            for(j=i+1;j<=n;j++)
                if(all[i][j]!=all[j][i]){
                    res = false;
                    break;
                }
        if(res)
            cout<<"Yes!"<<endl;
        else
            cout<<"No!"<<endl;
    }
    return 0;
}
