#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int tot_drink= k*l;
    int tot_slices= c*d;
    int tot_salt= p;

    int toast_by_drink= tot_drink/(n*nl);
    int toast_by_slices= tot_slices/(n);
    int toast_by_salt= tot_salt/ (n*np);

    cout<< min({toast_by_drink, toast_by_salt, toast_by_slices});

    return 0;
}