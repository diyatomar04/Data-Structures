#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,i,j;
    cout<<"enter no of columns";
    cin>>a;

    for(i=1;i<=3;i++){
        for(j=1;j<=a;j++){
             if((i+j)%4==0){
                cout<<"*";
             }
             else if(i==2 && j%4==0){
                 cout<<"*";
             }
             else{
                cout<<" ";
             }
        }
        cout<<"\n";
    }

}