#include <bits/stdc++.h>
using namespace std;

/**
        一个坑题
1. 如果第二行没有元素输出-1
2. 不用考虑重复元素不输出
3. 最大数如果有重复的照样输出，只需要将最大值剔除一个即可
**/

int main(){
    int n,i;
    int all[1001];
    while(cin>>n){
        for(i=0;i<n;i++)
            cin>>all[i];
        sort(all,all+n);

        cout<<all[n-1]<<endl;     //最大元素
        if(n-1>0){
            cout<<all[0];
            for(i=1;i<n-1;i++)
                cout<<" "<<all[i];
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
