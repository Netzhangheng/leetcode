#include <bits/stdc++.h>
using namespace std;

typedef struct{
    int id;
    int grade;
}student;

int cmp(const student &a,const student &b){
    if(a.grade==b.grade)
        return a.id<b.id;
    else
        return a.grade<b.grade;
}
//简单的排序问题
int main(){
    int n;
    vector<student> all;
    while(cin>>n){
        for(int i=0;i<n;i++){
            student oneNew;
            cin>>oneNew.id>>oneNew.grade;
            all.push_back(oneNew);
        }
        sort(all.begin(),all.end(),cmp);
        for(int i=0;i<n;i++)
            cout<<all[i].id<<" "<<all[i].grade<<endl;
        all.clear();
    }
    return 0;
}
