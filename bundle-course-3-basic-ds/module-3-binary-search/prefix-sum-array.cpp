#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    long long a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // prefix sum array
    int pre[n];
    pre[0] = a[0];
    for(int i = 1; i < n; i++) {
        pre[i] = a[i] + pre[i-1]; // current array value + prefix prev value
    }

    while(q--) {
        int l, r;
        cin >> l >> r;
        l--; // index = position - 1
        r--; // index = position -1 
        
        int sum = 0;
        if(l == 0) sum = pre[r] - 0;
        else sum = pre[r] - pre[l-1];
        cout << sum << endl;
    }

    return 0;
}