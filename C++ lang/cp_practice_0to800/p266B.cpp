#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n;
    cin>>t;

    string s;
    cin>>s;
   // char a[n];

    for(int j=0;j<t;j++){
        for(int i=0;i<n-1;i=i+1){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
               // cout<<s<<endl;
                i++;
            }
        }
    }

    cout<<s;
}