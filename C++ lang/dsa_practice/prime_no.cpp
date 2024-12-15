#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    bool flag=0;

    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"not a prime no";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime no"<<endl;
    }
}