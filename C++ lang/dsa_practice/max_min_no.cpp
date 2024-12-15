#include<stdio.h>
#include<iostream>

#include<climits>
using namespace std;

int main(){

int maxno, minno;
int i,n;
cin>>n;
int arr[n];
maxno=INT_MIN;
minno=INT_MAX;


for(i=0;i<n;i++){
    cin>>arr[i];
}

for(i=0;i<n;i++){
  /*  if(arr[i]>maxno){
        maxno=arr[i];
    }
    if(arr[i]<minno){
        minno=arr[i];
    } */

   maxno=max(maxno, arr[i]);
   minno=min(minno, arr[i]);
}

cout<<maxno<<" "<<minno;

return 0;
}