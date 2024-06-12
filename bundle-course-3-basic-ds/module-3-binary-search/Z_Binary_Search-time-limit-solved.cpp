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
    sort(a, a+n); // sort o(n log n)
    while(q--) { // o(q log n)
        int x;
        cin >> x;
        bool flag = false;
        // linear search
        for(int i=0; i<n; i++) {//o(log n)
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
    // o(n) + o (n log n) + o(q log n)
    // n log n
    // n,q <= 1.6 x 10^6 possible
    
    return 0;
}