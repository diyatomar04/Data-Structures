#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,x;

    cin>>n;
   x=0;
    while(n>0){
         a=n%10;
        x=x+(a*a*a);
        n=n/10;
    }
    cout<<x<<endl;
    if(x==n){
    cout<<"it is an armstrong no";
    }
    else{
    cout<<"not an armstrong no";
    }
    return 0;
}