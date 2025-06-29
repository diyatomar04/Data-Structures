#include<bits/stdc++.h>
using namespace std;

int sum(const vector<int>&add){
    int sum=0;
    for(int num:add){
        sum+=num;
    }
    return sum;
}
int main(){
    int t,x;
    cin>>t;
    vector<int>add1, add2;

    while(t--){
        cin>>x;
        for(int i=1;i<=x/2;i++){
            add1.push_back(i*2);
            add2.push_back(2*i -1);
        }

        int add01= sum(add1);
            int add02= sum(add2);

            if(add01==add02){
                cout<<"YES"<<endl;
                for(int num:add1){
                    cout<<num<<" ";
                }
                for(int num:add2){
                    cout<<num<<" ";
                }
            }
            else cout<<"NO"<<endl;
    }
}