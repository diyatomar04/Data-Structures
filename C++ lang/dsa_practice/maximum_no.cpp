#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],i,mx;
  mx=-100000000;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
       /* int j=i+1;
         if(a[i]>a[j]){
            mx=a[i];
         }   
         else{
            mx=a[j];
         } */

        mx=max(mx,a[i]);
        cout<<mx<<"  ";
        
    }
    cout<<"MAX no is "<<mx;
    return 0;
}