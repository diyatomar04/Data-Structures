#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int h[n], g[n];
    //vector<int>g(n);
    for(int i=1;i<=n;i++){
        cin>>h[i]>>g[i];
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(h[i]==g[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}