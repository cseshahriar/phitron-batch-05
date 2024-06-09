#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) { // O(N)
        int x = i;
        while(x > 0) { // O(log N)
            int digit = x % 10;
            cout << digit << " ";
            x /= 10;
        }
        cout << endl;
    }
    // O(N log N)

    /*
        O(1)
        O(log N)   -> 10^18
        O(sqrt(N)) -> 10^19
        O(N)       -> 10^7
        O(n log n) -> 10^5
        O(n^2) / O ( n * m) -> 10^3
    */

    return 0;
}