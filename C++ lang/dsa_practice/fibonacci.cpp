#include<bits/stdc++.h>
using namespace std;

int fibonacci(int num ){
    int f1=0;
    int f2=1;
    int sum;
    for(int i=1;i<=num;i++){
        cout<<f1<<endl;
        sum=f1+f2;
        f1=f2;
        f2=sum;
    }
    cout<<endl<<"sum of series is ";
    cout<<sum<<endl;
    return 0;
    
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}