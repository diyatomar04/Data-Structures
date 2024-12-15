 #include<iostream>
 using namespace std;

 int main(){
    int a,i,j;
    cout<<"enter value";
    cin>>a;

    for(i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
     
          cout<<" ";
        }
int k=i;
        for(;j<=a;j++){
            cout<<k--<<" ";
        }
        k=2;
        for( ;j<=a+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
 }