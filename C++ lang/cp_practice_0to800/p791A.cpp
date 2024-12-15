#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,b;
    cin>>l;
    cin>>b;
    int count=0;
    do{
        l=l*3;
        b=b*2;
        count++;
    }while(b>=l);

    cout<<count;
}