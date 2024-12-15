#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int n,k;
    cin>>n>>k;
    int a[n],i;
    int ans=0;

    for(i=1;i<=n;i++){
        cin>>a[i];
        if(a[k]<=a[i] && a[i]>0){
            ans++;
        }
    }

    cout<<ans<<endl;
}
*/

/********************************************************* */

/* B TAXI*/

int main(){

    int n,i,left;
    cin>>n;
    int a[n];
    int tot=0;

    for(i=1;i<=n;i++){
        cin>>a[i];
        tot+=a[i];
    }

    int ans=0;
    ans=(tot)/4;
    left=tot-(4*ans);
    if(left<4 && left>0){
        ans+=1;
    }
    cout<<ans;
}


/**************************************************************** */