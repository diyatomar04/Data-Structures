#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,x,y,z;
    cin>>n;
    int t_count;
    int count=0;
    for(i=0;i<n;++i){
        cin>>x>>y>>z;
        t_count=x+y+z;

        if(t_count>=2){
            count++;
           }
    }
    cout<<count;
return 0;
}