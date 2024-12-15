#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    //k:starting_amt  w:no of items   n:amt_he_has
    int tot_amt=0,amt_b=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++){
        tot_amt=k*i+tot_amt;
    }
    amt_b=tot_amt-n;
    if(amt_b<0){
        cout<<'0';
    }
    else{
    cout<<amt_b;
    }
}