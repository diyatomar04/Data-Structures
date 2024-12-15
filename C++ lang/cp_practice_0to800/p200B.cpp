#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int n;
    double count=0;
    cin>>n;
    double a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        count+=a[i];
    }

    double ans=count/n;
    cout<< fixed <<setprecision(12)<<ans;
}