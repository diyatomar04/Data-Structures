#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[2*n+1];
// a->exit   b->enter

    for(int i=1;i<(2*n)-1;i++){
        cin>>a[i];
    }
    a[0]=0;
    a[2*n-1]=0;
    int ans=a[1], max_ans=0;
    
    for(int i=1;i<(2*n)-1;i++){
        if(i%2==0){
            ans=ans-a[i+1];
        }
        else{
            ans=ans+a[i+1];
        }

        max_ans=max(max_ans , ans) ;
    }
   cout<<max_ans<<endl;
}