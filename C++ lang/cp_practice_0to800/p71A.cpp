#include<iostream>
using namespace std;
int main(){
    int i,a;
    
   
    //cout<<"Enter no of strings ";
    cin>>a;
    string x;
    
    for(i=0;i<a;i++){
    cin>>x;
      if(x.length()>10){
    
        cout<<x[0]<< x.length()-2 <<x[x.length()-1]<<endl;
        }
        else{
        cout<<x<<endl;
        }
    
}
return 0;
}