//sum of n natural numbers

#include<bits/stdc++.h>
using namespace std;

int no_sum(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
int ans;
ans=no_sum(n);

cout<<"Sum of n natural no is "<<ans;
}