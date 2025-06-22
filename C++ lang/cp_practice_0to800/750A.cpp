#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k, sum=0, count=0;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        sum+=(i*5);
        int check;
        check = 240 - sum;
        
        if(check >= k){
            count++;
        }
    }

    cout<<count;
    return 0;
}