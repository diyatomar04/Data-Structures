#include<bits/stdc++.h>
using namespace std;

int main(){
    int red, blue, count, left;
    cin>>red>>blue;

    if(red>blue){
        cout<<blue<<" ";
        count=red-blue;
        left= count/2;
        cout<<left;
    }
    else{
        cout<<red<<" ";
        count=blue-red;
        left= count/2;
        cout<<left;
    }
}