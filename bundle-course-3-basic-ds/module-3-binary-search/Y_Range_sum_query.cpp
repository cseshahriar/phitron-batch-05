#include <bits/stdc++.h>
using namespace std;
// problem range sum query
// 1.5 * 10^7 is possible
// but 1.5 * 10^10 occur
// so solve with prefix sum

// bruteforce is opposite of optimization 
// position is i + 1

int main() {
    int n, q;
    cin >> n >> q;
    long long int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        l--; // index = position - 1
        r--; // index = position -1 
        
        int sum = 0;
        
        // time complexity did not match
        for(int i=l; i<= r; i++) {
            sum += a[i];
        }

        // optimization
        cout << sum << endl;
    }

    return 0;
}