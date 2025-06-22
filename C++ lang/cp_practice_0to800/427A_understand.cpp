#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int untreated=0, available=0;

    while(n--){
        int event;
        cin>>event;

        if(event == -1){
            if(available > 0){
                available--;
            }
            else{
                untreated++;
            }
        }

        else{
            available += event;
        }
    }

    cout<< untreated <<endl;

    return 0;
}