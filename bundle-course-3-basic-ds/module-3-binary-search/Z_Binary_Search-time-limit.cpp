#include <bits/stdc++.h>
using namespace std;
// binary search
// time limit exceeded
// need binary search
// time limit 1 second
int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++) { // o(n)
        cin >> a[i];
    }

    while(q--) { // o(2)
        int x;
        cin >> x;
        bool flag = false;
        for(int i=0; i<n; i++) {//o(n)
            if(a[i] == x) {
                flag = true;
                break;
            }
        }
        if(flag == true) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
    // o(n2)
    // n,q <= 10^5 = 10^5 * 10^5 = 10^10 not possible
    
    return 0;
}