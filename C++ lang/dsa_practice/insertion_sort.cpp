#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    int current;
    for(i=1;i<n;i++){
       current=a[i];
       int j=i-1;
       while(a[j]>current && j>=0){
        a[j+1]=a[j];
        j--;
       }
       a[j+1]=current;
    }
    cout<<"Sorted Array"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}