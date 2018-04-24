#include <bits/stdc++.h>
using namespace std;

int main(){
    const int run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    const int NotRun[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y,m,d,i;
    while(cin>>y>>m>>d){
        int days=0;
        if((y%4==0 && y%100!=0) || y%400==0){
            for(i=0;i<m-1;i++)
                days+=run[i];
        }else{
            for(i=0;i<m-1;i++)
                days+=NotRun[i];
        }
        cout<<days+d<<endl;
    }
    return 0;
}
