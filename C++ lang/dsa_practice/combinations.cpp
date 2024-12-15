//binary coffient or combination in maths

#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    //nCr= n!/( (n-r)! * r! )
    int sum=1;
   for(int i=2;i<=num;i++){
    sum=sum*i;
   }
 return sum;
}
int main(){
    int n1,r;
    //n -> no of items
    //r -> items being chosen
    cin>>n1>>r;
    
    float ans;
  ans=fact(n1)/ (fact(r)* fact(n1-r));
  cout<<"Answer is "<<ans;

    return 0;
}