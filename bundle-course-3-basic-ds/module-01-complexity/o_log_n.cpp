// log n = 10^18 possible
#include <bits/stdc++.h>
using namespace std;

int main() {
    // input
    int n, m;
    cin >> n >> m;

    // O (N)
    for(int i = 1; i <= n; i = i * 2) {
        cout << i << endl; // O(1)
    }

    // O(N/2)
    for(int i = 0; i < n; i+=2) {
        cout << i << endl; // O(1)
    }


    // O(N + M)
    for(int i = 0; i < n; i++) {
        cout << i << endl; // O(1)
    }

    for (int j = 0; j < m; j++)
    {
        cout << j << endl; // O(1)
    }

    return 0;
}