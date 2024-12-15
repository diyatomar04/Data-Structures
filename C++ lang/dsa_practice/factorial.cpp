#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    int f1=1;
    int f2=2;
    int sum;
    for(int i=2;i<=num;i++){
     cout<<f1<<endl;
       sum=f1*f2;
       f1=f2;
       f2=f2+1;

       /*
       sum=sum*i;
       */
    }
    cout<<endl<<"Factorial is "<<sum;
    return 0;
}
int main(){
    int n;
    cin>>n;
    factorial(n);
    return 0;
}