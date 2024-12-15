/* Total 15 Rs. are there. 
1Rs. -> 1 chocolate
3 wrappers -> 1 chocolate .
MAX NO OF CHOCOLATE ?    */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,z; 
    cout<<"Enter the amount ";
    cin>>n;
    x=0;
    int count=n;
  
        //Chocolates we can get using wrappers
        x=n/3;
        count=count+x;
        if(x > 0){
            if(x<3){
                y=x;
            }
            else{
                  y=x/3;
                  count=count+y;
            }
       
         z=n-(3*x);
         if(y>0){
             int left;
             left=z+y;
             count=(left/3)+count;
         }
        
        }
      
    cout<<"Total no of chocolates "<<count;
    return 0;
}