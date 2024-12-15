#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],i,j;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
  
    }

cout<<"Sorted array"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}