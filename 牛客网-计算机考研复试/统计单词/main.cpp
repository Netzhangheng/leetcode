#include <bits/stdc++.h>
using namespace std;

void splitString(string a){
    int i=0,tmp=0;
    //取出开头空格的情况
    while(a[i]==' ')
        i++;

    for(;i<a.size();){
        while(a[i]!=' ' && a[i]!='.')
            i++,tmp++;
        while(i<a.size() && (a[i]==' ' || a[i]=='.'))
            i++;
        cout<<tmp;
        //这里是个坑点，最后一个输出是没有空格的
        if(i!=a.size())
            cout<<" ";
        tmp=0;
    }
}

int main(){
    string str;
    while(getline(cin,str)){
        splitString(str);
        cout<<endl;
    }
    return 0;
}
