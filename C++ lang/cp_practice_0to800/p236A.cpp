#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    char a[100];
    cin>>x;
    int n=x.length();
    int count=0;
    sort(x.begin(),x.end());
    for(int i=0;i<n;i++){
        a[i]=x[i];
        if(a[i]!=a[i-1]){
            count++;
        }
    }

    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}