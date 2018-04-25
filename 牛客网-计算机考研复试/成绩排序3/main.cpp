#include <bits/stdc++.h>
using namespace std;

typedef struct{
    string name;
    int age;
    int grade;
}student;

//sort函数中比较参数
bool cmp(const student &a,const student &b){
    if(a.grade!=b.grade)
        return a.grade < b.grade;
    else if(a.name!=b.name)
        return a.name<b.name;
    else
        return a.age<b.age;
}

int main(){
    int n;
    vector<student> all;
    while(cin>>n){
        for(int i=0;i<n;i++){
            student tmp;
            cin>>tmp.name>>tmp.age>>tmp.grade;
            all.push_back(tmp);
        }
        sort(all.begin(),all.end(),cmp);
        for(int i=0;i<n;i++)
            cout<<all[i].name<<" "<<all[i].age<<" "<<all[i].grade<<endl;
        all.clear();
    }
    return 0;
}
