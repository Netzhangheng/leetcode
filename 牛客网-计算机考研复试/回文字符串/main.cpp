#include <bits/stdc++.h>
using namespace std;
//字符串的反转
int main(){
    string a;
    string tmp;
    bool status = true;
    while(getline(cin,a)){
        status = true;
        tmp = a;
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size()+1;i++){
            if(a[i] != tmp[i]){
                cout<<"No!"<<endl;
                status = false;
                break;
            }
        }
        if(status) cout<<"Yes!"<<endl;
    }
    return 0;
}
