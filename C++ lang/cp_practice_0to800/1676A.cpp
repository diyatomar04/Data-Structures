#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;
        //int s=n.length();
        
        int c1=0;
        int c2=0;
        for(int i=0;i<3;i++){
            c1+=n[i] - '0';
        }
        for(int i=3;i<6;i++){
            c2+=n[i] - '0';
        }

        if(c1==c2){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}