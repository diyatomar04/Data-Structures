#include<iostream>
using namespace std;

int linearfunc(int arr[],int n,int num, int &found){
    int i;
    for(i=0;i<n;i++){
    if(arr[i]==num){
       // cout<<"No."<<num<<" is present at index "<<i;
        found=0;
        return i;
       
    }
    }
       found = -1;
       return -1; 
   
 

}

int main(){
 int n;
 cin>>n;
 int arr[n],i;

 for(i=0;i<n;i++){
    cin>>arr[i];
 }
int num;
cin>>num;
int found=0;
int pos=linearfunc(arr, n, num, found);
if(found==-1){
    cout<<"No. not present";
}
else {
    cout<<"No present at position "<< pos;
}
}