#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> math, pe, prog;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) prog.push_back(i+1);
        if(a[i]==2) math.push_back(i+1);
        if(a[i]==3) pe.push_back(i+1);
    }

    int count=min({prog.size(), math.size(), pe.size()});
    cout<<count<<endl;

    for(int i=0;i<count;i++){
        cout<<prog[i]<<" "<<math[i]<<" "<<pe[i]<<endl;
    }
}