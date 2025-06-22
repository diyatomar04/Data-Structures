#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        vector<int>roundno;
        int temp,place=1;

        while(a[i]>0){
        temp=a[i]%10;
        if(temp != 0){
            roundno.push_back(temp*place);
        }
        a[i]=a[i]/10;
        place*=10;
        }

        cout<<roundno.size()<<endl;

        for(auto it: roundno){
            cout<< it<<" ";
        }
        cout<<endl;
    }
   // cout<<count;
    return 0;
}