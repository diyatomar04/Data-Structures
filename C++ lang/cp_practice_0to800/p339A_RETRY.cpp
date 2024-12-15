#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    char a[100];
    cin>>x;
    int temp=0;
    int n;
    n=x.length();
    
    for(int i=0;i<n;i++){
        if(x[i]>='1' && x[i]<='3'){
            a[temp]=x[i];
            temp++;
        }
    }

    for(int i=0;i<temp;i++){
        for(int j=0;j<temp;j++){
            if(a[j]>a[i]){
                swap(a[j],a[i]);
            }
        }
    }

    for(int i=0;i<temp;i++){
        if(i!=temp-1){
            cout<<a[i]<<'+';
        }
        else{
            cout<<a[i];
        }
    }
}