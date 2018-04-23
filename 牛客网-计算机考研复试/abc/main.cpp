#include <bits/stdc++.h>
using namespace std;

//根据条件特性进行筛选即可
int main(){
    int a,b,c;
    for(c = 1;c<10;c++){
        if((c+c)%10 == 2){
            for(b = 1;b<10;b++){
                if(((b+c)*10+c+c)%100 == 32){
                    for(a=1;a<10;a++)
                        if(((a+b)*100+((b+c)*10+c+c))==532)
                            cout<<a<<" "<<b<<" "<<c<<endl;
                }
            }
        }
    }
    return 0;
}
