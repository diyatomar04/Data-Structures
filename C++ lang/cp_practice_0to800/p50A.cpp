#include<bits/stdc++.h>
using namespace std;

int main(){
    int m , n;
    cin>>m>>n;
   if(m>=1 && m<=16 && n>=1 && n<=16){
    //No of pieces 
    int ans;
    ans=(m*n)/(2*1);
    cout<<ans;
   }
   return 0;
}