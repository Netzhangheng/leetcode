#include <bits/stdc++.h>
using namespace std;

//注意范围的大小、其次理解n阶的方式其实就是n-1阶和n-2阶方式之和
int main(){
    long long ways[90]={0};
    ways[1] = 1;
    ways[2] = 2;
    int n;
    while(cin>>n){
        if(n > 2 || ways[n]==0){
            for(int i=3;i<=n;i++)
                ways[i] = ways[i-1]+ways[i-2];
        }
        cout<<ways[n]<<endl;
    }
    return 0;
}
