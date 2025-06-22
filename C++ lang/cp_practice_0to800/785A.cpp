#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    string arr[n];
    cin.ignore(); //Removes the leftover \n so getline works correctly
    for(int i=0;i<n;i++){
        getline(cin,arr[i]);
    }

   /* cout<<"output"<<endl; 
   for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    } */

    for(int i=0;i<n;i++){
        if(arr[i]=="Tetrahedron"){
            count+=4;
        }
        else if(arr[i]=="Cube"){
            count+=6;
        }
        else if(arr[i]=="Octahedron"){
            count+=8;
        }
        else if(arr[i]=="Dodecahedron"){
            count+=12;
        }
        else if(arr[i]=="Icosahedron"){
            count+=20;
        }

    }
    cout<<count;
}