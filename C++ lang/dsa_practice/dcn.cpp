#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the binary input: ";
    cin >> s; 
    int n=s.length();

    int count = 0; 

    cout << "Stuffed binary: ";
    for (int i = 0; i< n ; i++) {
        cout << s[i]; 
        if (s[i] == '1') {
            count++;
            if (count == 5) {
                cout << "0"; 
                count = 0;   
            }
        } else {
            count = 0;
        }
    }

    cout << endl;
    return 0;
}
