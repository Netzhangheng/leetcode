#include <bits/stdc++.h>
using namespace std;
/**
1. 完数:一个数如果恰好等于它的各因子(该数本身除外)子和
2. 盈数:因子之和大于该数
**/

int main(){
    queue<int> wan;
    queue<int> yin;
    int tmp;
    for(int i=2;i<=60;i++){
        tmp = 0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0){
                tmp+=j;
                if(tmp>i)
                    break;
            }
        }
        if(tmp>i) yin.push(i);
        if(tmp==i) wan.push(i);
    }
    cout<<"E:";
    while(!wan.empty()){
        cout<<" "<<wan.front();
        wan.pop();
    }
    cout<<endl;

    cout<<"G:";
    while(!yin.empty()){
        cout<<" "<<yin.front();
        yin.pop();
    }
    cout<<endl;

    return 0;
}
