#include<bits/stdc++.h>
using namespace std;

int main(){
    string n1,n2,ans;
    cin>>n1>>n2;
    int length=n1.length();
  //  ans="";
    for(int i=0;i<length;i++){
        if(n1[i]!=n2[i]){
         // ans+='1';
        ans='1';
          cout<<ans;
        }
        else{
         //   ans+='0';
           ans='0';
            cout<<ans;
        }
    }
  //  cout<<ans;
}