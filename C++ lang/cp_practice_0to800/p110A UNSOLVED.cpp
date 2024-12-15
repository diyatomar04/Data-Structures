#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    string n;
    cin>>n;
    int length=n.length();
    bool flag=true;
    int count=0;
    for(char c : n){
        if((c!='4' || c!='7') && (length!=4 || length!=7)){
            flag=false;   
        }
        if((c=='4' || c=='7') && (length!=4 || length!=7)){
            flag=false;   
        }
        if((c=='4' || c=='7') && (length==4 || length==7)){
            flag=true;
        }
       
    } 

    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    */

   int main(){
    int n;
    cin>>n;

    string s=to_string(n);
    int count=0;
   
    for(char c : s){
        if(c=='4' || c=='7'){
            count++;
        }
    }
   // cout<<count;
   // bool flag=true;
    if( (count==4 || count==7)){
           cout<<"YES";   
    }
   else{
          cout<<"NO";
    }

    
   }
   
  
  
    