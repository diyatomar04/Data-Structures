#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],i;

    for(i=0;i<n;i++){
        cin >>a[i];
    }

      int sum=0;

    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){
          
            sum=a[j]+sum;
            cout<< sum<<" ";
        }
    }
    return 0;
}