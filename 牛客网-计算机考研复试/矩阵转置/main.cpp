#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100];
    int n,i,j;
    while(cin>>n){
        for(i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++)
                cout<<a[j][i]<<" ";
            cout<<a[j][i]<<endl;
        }
    }
    return 0;
}
