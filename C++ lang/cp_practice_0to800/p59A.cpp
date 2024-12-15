#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    cin>>s;
    char a[100];
    int l_count=0, u_count=0;
    int i,n=s.length();
    for( i=0;i<n;i++){
        if(islower(s[i])){
            l_count++;
        }
        else{
            u_count++;
        }
    }
//cout<<l_count<<" "<<u_count;

    if(/*l_count!=u_count &&*/ u_count>l_count){
        for(i=0;i<n;i++){
        a[i]=toupper(s[i]);
        }
    }
    else/*if(l_count==u_count || l_count>u_count)*/
    {
       for( i=0;i<n;i++){
        a[i]=tolower(s[i]);
        }
    }

    for(i=0;i<n;i++){
        cout<<a[i];
    }
    
}