#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    char a[1000];
    cin>>x;
    int n=x.length();

   for(int i=0;i<n;i++){
        a[i]=x[i];
        a[0]=toupper(a[0]);
    }

    for(int i=0;i<n;i++){
     cout<<a[i];   
    }
}