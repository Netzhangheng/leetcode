#include<bits/stdc++.h>
using namespace std;

typedef struct{
    string name;
    int grade;
}student;

bool gradeCpm0(const student &a,const student &b){
    return a.grade > b.grade;
}

bool gradeCpm1(const student &a, const student &b){
    return a.grade < b.grade;
}
//注重sort和stable_sort的使用有什么差别
int main(){
    int n;
    int cmpStyle;
    vector<student> students;
    while(cin>>n){
        cin>>cmpStyle;
        for(int i=0;i<n;i++){
            student newStudent;
            cin>>newStudent.name>>newStudent.grade;
            students.push_back(newStudent);
        }
        if(cmpStyle==0)
            stable_sort(students.begin(),students.end(),gradeCpm0);
        else
            stable_sort(students.begin(),students.end(),gradeCpm1);
        for (int i = 0; i < n;i++){
            cout << students[i].name<<" "<<students[i].grade << endl;
        }
        students.clear();
    }
    return 0;
}

/**
28
1
qhsq 15
ozslg 79
ncttmtsphb 71
a 39
eeiuyzsj 34
nmlrokx 21
pjizylo 90
ec 45
f 12
sh 31
fm 25
ptprphubqk 29
wxdiwv 0
uhlcpjtxad 60
w 20
zwktbpun 70
efzfkf 69
v 31
rsnrgtl 73
lhdo 76
wt 56
mcdwd 14
ydrnoyd 37
gmlfds 76
zx 1
dqx 98
gz 90
kvbzrwrrjj 13
**/
/**
wxdiwv 0
zx 1
f 12
kvbzrwrrjj 13
mcdwd 14
qhsq 15
w 20
nmlrokx 21
fm 25
ptprphubqk 29
sh 31
v 31
eeiuyzsj 34
ydrnoyd 37
a 39
ec 45
wt 56
uhlcpjtxad 60
efzfkf 69
zwktbpun 70
ncttmtsphb 71
rsnrgtl 73
lhdo 76
gmlfds 76
ozslg 79
pjizylo 90
gz 90
dqx 98
**/
