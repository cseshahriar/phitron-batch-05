#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, q;
    cin >> n >> q;
    long long int a[n];
    for(int i = 0; i < n; i++) { // o(n)
        cin >> a[i];
    }

    // prefix sum array
    long long int pre[n];
    pre[0] = a[0];
    for(int i = 1; i < n; i++) { // o(n)
        pre[i] = a[i] + pre[i-1]; // current array value + prefix prev value
    }

    while(q--) { // o(q)
        long long int l, r;
        cin >> l >> r;
        l--; // index = position - 1
        r--; // index = position -1 
        
        long long int sum = 0;
        if(l == 0) sum = pre[r] - 0;
        else sum = pre[r] - pre[l-1];
        cout << sum << endl;
    }
    // o(n+q) = o(n)
    return 0;
}