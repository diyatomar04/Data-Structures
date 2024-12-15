#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s1= "I hate";
    string s2="I love";
    for(int i=1;i<=n;i++){
        if(i>1){
            cout<<" that ";
        }
        if(i%2==0){
            cout<<s2;
        }
        else{
            cout<<s1;
        }
    }
    cout<<" it"<<endl;
    return 0;
}