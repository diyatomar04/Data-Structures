#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;

    cin>>n;
   // a=0;
    while(n>0){
         a=n%10;
       cout<<a;
        n=n/10;
    }
    //cout<<a;
    return 0;
}