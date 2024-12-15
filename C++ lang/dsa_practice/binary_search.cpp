#include<iostream>

using namespace std;

int binarysearch(int a[], int start,int mid, int end,int num){
    
    while(start<=end){
    if(a[mid]==num){
        return mid;
    }
    else if(a[mid]>num){
       end=mid-1;
    }
    else if(a[mid]<num){
        start=mid+1;
    }
 }

    return -1;

}
int main(){
    int n,i,num;
    cin>>n; //size of an array
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter no to be found ";
    cin>>num;

    int start=0;
    int mid=n/2;
    int end=n;
    
    binarysearch(a,start, mid,end, num);
    
    cout<<"No is found at pos "<<mid;
   
   return 0;
}