#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x;
    cin>>t;

    while(t--){
        vector<int>abc;
        for(int i=0;i<3;i++){
            cin>>x;
            abc.push_back(x);
        }

        sort(abc.begin(), abc.end());

        if(abc[2]==(abc[0]+abc[1])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}