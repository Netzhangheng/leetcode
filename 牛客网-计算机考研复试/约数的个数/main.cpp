#include <bits/stdc++.h>
using namespace std;

//注意如何达到最小的时间复杂度。利用i*i来达到稳定
int getYNum(const int num){
    int s = 0;
    int i;
    for(i=1;i*i<num;i++)
        if(num%i==0)
            s+=2;
    if(i*i == num) s++;
    return s;
}

int main(){
    int n;
    while(cin>>n && n!=0){
        int tmp;
        for(int i=0;i<n;i++){
            cin>>tmp;
            cout<<getYNum(tmp)<<endl;
        }
    }
    return 0;
}
