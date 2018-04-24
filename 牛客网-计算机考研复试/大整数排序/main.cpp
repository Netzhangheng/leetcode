#include <bits/stdc++.h>
using namespace std;

//简单的排序问题,将大整数转化成字符串
bool cmp(string a,string b){
    if(a.size() == b.size())
        return a<b;
    else
        return a.size()<b.size();
}

int main(){
    int n;
    vector<string> all;
    string tmp;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>tmp;
            all.push_back(tmp);
        }
        sort(all.begin(),all.end(),cmp);
        for(int i=0;i<n;i++)
            cout<<all[i]<<endl;
        all.clear();
    }
    return 0;
}
