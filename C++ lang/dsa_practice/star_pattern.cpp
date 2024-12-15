 #include<iostream>
 using namespace std;

 int main(){
    int a,i;
    cout<<"enter value";
    cin>>a;

    for(i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
     
          cout<<" ";
        }
       for(int j=1;j<=2*i -1;j++){
        cout<<"*";
       }
        cout<<endl;
    }

    for(i=a;i>=1;i--){
        for(int j=1;j<=a-i;j++){
     
          cout<<" ";
        }
       for(int j=1;j<=2*i -1;j++){
        cout<<"*";
       }
        cout<<endl;
    }
 }