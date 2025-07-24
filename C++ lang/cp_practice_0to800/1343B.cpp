#include <bits/stdc++.h>
using namespace std;

int sum(const vector<int>& add) {
    int sum = 0;
    for (int num : add) {
        sum += num;
    }
    return sum;
}

int main() {
    int t, x;
    cin >> t;

    while (t--) {
        cin >> x;

        vector<int> add1, add2; 
        
        if (x % 4 != 0) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 1; i <= x / 2; i++) {
            add1.push_back(i * 2);
        }

        for (int i = 1; i < x / 2; i++) {
            add2.push_back(2 * i - 1);
        }

        int last_odd = sum(add1) - sum(add2);
        add2.push_back(last_odd);

        cout << "YES" << endl;
        for (int num : add1) {
            cout << num << " ";
        }
        for (int num : add2) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
