#include <iostream>

using namespace std;

int main() {
int a,i,j;
cout<<"no of rows nd columns"<<endl;
cin>>a;
//int n=1;
for (i=1;i<=a;i++){
    for(j=1;j<=i;j++){
        cout<<"*";
    }
    int space=2*a - 2*i;
    for(j=1;j<=space;j++){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}

for (i=a;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<"*";
    }
    int space=2*a - 2*i;
    for(j=1;j<=space;j++){
        cout<<" ";
    }
    for(j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}

}