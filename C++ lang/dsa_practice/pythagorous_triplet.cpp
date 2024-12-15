#include<iostream>
#include<math.h>
using namespace std;

bool check(int x, int y, int z){
    int a,b,c;
    a=max(x, max(y,z));

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        c=y;
        b=x;
    }

    if((a*a)==(b*b)+(c*c)){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int x,y,z;
    cin>>x>>y>>z;

   if(check(x,y,z)==true){
    cout<<"Yes a triplet";
   }
   else{
    cout<<"Not a triplet";
   }
    return 0;
}