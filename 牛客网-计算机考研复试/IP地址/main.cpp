#include <bits/stdc++.h>
using namespace std;
//输入不需要考虑过多的因素。
//后面自己考虑各种因素

int main(){
    char str1[100],str2[100]=".";
    int a,flag;
    char *res;
    while(cin>>str1){
        flag=0;
        res = strtok(str1,str2);
        while(res!=NULL){
            a = atoi(res);
            if(!(a>=0&&a<=255)){
                flag=1;
                break;
            }
            res = strtok(NULL,str2);
        }
        if(flag==1)
            cout<<"No!"<<endl;
        else
            cout<<"Yes!"<<endl;
    }
    return 0;
}
