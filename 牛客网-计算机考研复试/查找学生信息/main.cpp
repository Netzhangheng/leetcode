#include <bits/stdc++.h>
using namespace std;

typedef struct{
    string name;
    string sex;
    int age;
}student;

int main(){
    int n,m;
    string id;
    map<string,student> all;
    while(cin>>n){
        for(int i=0;i<n;i++){
            student one;
            cin>>id>>one.name>>one.sex>>one.age;
            all.insert(pair<string,student>(id,one));
        }
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>id;
            if(all.count(id)){
                cout<<id<<" "<<all[id].name<<" "<<all[id].sex<<" "<<all[id].age<<endl;
            }else{
                cout<<"No Answer!"<<endl;
            }
        }
        all.clear();
    }
    return 0;
}
