#include <bits/stdc++.h>
using namespace std;

unsigned long long jc[51]={0};

unsigned long long getjc(int num){
    if(num == 0)
        return 0;
    if(jc[num]!=0)
        return jc[num];
    else{
        jc[num] = num*getjc(num-1);
        return jc[num];
    }
}
//注意数据的范围
int main(){
    int n;
    unsigned long long y1,y2;
    jc[1] = 1;
    while(cin>>n){
        y1 = 0;
        y2 = 0;
        for(int i=1;i<=n;i++){
            if(i%2==1)
                y1+=getjc(i);
            else
                y2+=getjc(i);
        }
        cout<<y1<<" "<<y2<<endl;
    }
    return 0;
}
