#include <bits/stdc++.h>
using namespace std;

//水题，写法很多。
int main(){
    int n;
    int tmp;
    vector<int> all;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>tmp;
            all.push_back(tmp);
        }
        sort(all.begin(),all.end());
        for(int i=0;i<n;i++)
            cout<<all[i]<<" ";
        cout<<endl;
        all.clear();
    }
    return 0;
}
