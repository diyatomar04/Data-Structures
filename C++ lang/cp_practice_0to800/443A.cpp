#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int x, count=0;
    x=s.length();
    //cout<<s;

    set<char>distinctval;

    for(int i=0;i<x;i++){
        if(isalpha(s[i])){
            distinctval.insert(s[i]);
        }
    }
    cout<<distinctval.size();
    
}