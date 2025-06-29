#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        x=s.length();

        cout<<s[0];
        for(int i=1;i<x-1;){
            if(s[i]==s[i+1]){
                cout<<s[i];
                i+=2;
            }
            else{
                cout<<s[i];
                i+=1;
            }
        }
        
        cout<<s[x-1]<<endl;
    }
}