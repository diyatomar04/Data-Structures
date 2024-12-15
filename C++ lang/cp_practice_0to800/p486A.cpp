#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    long long int n;
    cin>>n;
    long long int o_count=0, e_count=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            e_count+=i;
        }
        else{
            o_count+=i;
        }
    }
    long long int ans=e_count-o_count;
    cout<<ans;
}

*/

int main(){
    long long n, ans;
    cin>>n;
    ans= pow(-1,(n)) * (n+1)/2;
    cout<<ans;
}
