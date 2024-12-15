#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    int a[6][6];

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>a[i][j];
        }

    }
int counti=0;
int countj=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(a[i][j]==1){  
                if(i>3){
                    counti=i-3;
                }
                if(i<3 ){
                    counti=3-i;
                }
                if(j>3){
                    countj=j-3;
                }
                if(j<3 ){
                    countj=3-j;
                }
            }
        }
      
    }
    int count=counti+countj;
    cout<<count;
}