#include<bits/stdc++.h>
using namespace std;

int main(){
    string x, y;
    cin>>x>>y;
    int x_length=x.length();
    int y_length=y.length();
    char a[x_length];
    bool flag=true;

    if(x_length==y_length){

    for(int i=0;i<x_length;i++){
        a[i]=x[x_length-i-1];
    }

    for(int i=0;i<x_length;i++){
        if(a[i]!=y[i]){
            flag=false;
            break;
        }
    }

    if(flag==false){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

    }

    else{
        cout<<"NO";
    }

}