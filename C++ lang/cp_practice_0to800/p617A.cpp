#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans;
    if(n%5){
      ans=n/5+1;
    }
    else{
       ans=n/5;    
    }

    cout<<ans;
    return 0;
}