#include <bits/stdc++.h>
using namespace std;

typedef struct{
    int x;
    int y;
}data;

bool cmp(const data &a,const data &b){
    if(a.x==b.x)
        return a.y<b.y;
    else
        return a.x<b.x;
}

int main(){
    int n;
    vector<data> all;
    while(cin>>n){
        for(int i=0;i<n;i++){
            data tmp;
            cin>>tmp.x>>tmp.y;
            all.push_back(tmp);
        }
        sort(all.begin(),all.end(),cmp);
        cout<<all[0].x<<" "<<all[0].y<<endl;
        all.clear();
    }
    return 0;
}
