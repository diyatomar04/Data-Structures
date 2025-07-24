#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int temp =b;
        b= a % b;
        a= temp;
    }
    return a;
}
int main(){
    int a, b, count=0;
    cin>>a>>b;

    int big= max(a, b);

    count=6-big+1;
    int tot=6;
    int d= gcd(count, tot);

    cout<< count/d << "/" << tot/d;
}