#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // for(int i = 1; i <= n; i++) { // O(N)
    //     for(int j=1; j <= n; j++) { // O(N)
    //         cout << "1" << " ";
    //     }
    //     cout << endl;
    // }
    // O(N * N) => O(n^2)

    for(int i = 1; i < n - 1; i++) { // O(N)
        for(int j= i + 1; j < n; j++) { // O(N)
            cout << "1" << " ";
        }
        cout << endl;
    }
    // O(N * N) => O(n^2)
    // (n - 1) (n+1 ) / 2
    // n-1/2 x n/2
    // n^2 - n / 2
    // n^2 - n 
    // n^2

    // n (n+1 ) / 2, n series summation
    return 0;
}