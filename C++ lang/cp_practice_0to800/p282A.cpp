#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,x,i;
   cin>>n;
   string exp;
   x=0;
  
   for(i=1;i<=n;i++){
       cin>>exp;
       
        if(exp=="++x")
          ++x;

         else if(exp=="x++")
          x++;

         else if(exp=="--x")
          --x;

         else if(exp=="x--")
          x--;

         /*
          if (exp[0] == '+' || exp[1] == '+') {
            ++x;
        } else if (exp[0] == '-' || exp[1] == '-') {
            --x;
        }
        */  
        
       }

   cout<<x;
   
    return 0;
}