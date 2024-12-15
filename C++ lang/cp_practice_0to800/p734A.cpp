#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a_count=0, d_count=0;
    cin>>n;
    string s;
    cin>>s;

    char a[n];

    for(int i=0;i<n;i++){
        a[i]=s[i];
        if(a[i]=='A'){
            a_count++;
        }
        else if(a[i]=='D'){
            d_count++;
        }
    }

    if(a_count==d_count){
        cout<<"Friendship";
    }
    else if(a_count>d_count){
        cout<<"Anton";
    }
    else{
        cout<<"Danik";
    }
}