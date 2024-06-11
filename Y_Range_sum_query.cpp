#include <bits/stdc++.h>
using namespace std;
// bruteforce is opposite of optimization 
// position is i + 1

int main() {
    int n, q;
    cin >> n >> q;
    long long a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        l--; // index = position - 1
        r--; // index = position -1 
        int sum = 0;
        for(int i=l; i<= r; i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}