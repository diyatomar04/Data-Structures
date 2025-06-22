#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3], dist=0, x;

    //Find median to find the least dist travelled

    for(int i=0;i<3;i++){
        cin>>a[i];
    //    sum+=a[i];
    }

    sort(a, a+3);
    x=a[1];
    for(int i=0;i<3;i++){
        dist=dist + abs(a[i] - x);
    }

    cout<<dist;
    return 0;

}