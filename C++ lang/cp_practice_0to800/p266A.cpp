#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    cin>>n;
    string x;
    cin>>x;
    char a[50];

    for(int i=0;i<n;i++){
        a[i]=x[i];
        if(a[i]==a[i-1]){
            count++;
        }
    }

    cout<<count;
}