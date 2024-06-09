#include <bits/stdc++.h>
using namespace std;

// o(sqrt(n)) // 1 5 25
// if n = 36 so 36 18 12 9

int main() {
    int n;
    cin >> n;
    for(int i = 1; i < sqrt(n); i++) { // O(sqrt(n))
        if(n % i == 0) {
            cout << i << " ";
            if(n/i != i) cout << n/i << endl;
        }
    }


    cout << endl;
    for(int i = 1; i * i < n; i++) { // O(sqrt(n))
        if(n % i == 0) {
            cout << i << " ";
            if(n/i != i) cout << n/i << endl;
        }
    }
    
    cout << endl;
    for(int i = 1; i * i <= n; i++) { // O(sqrt(n))
        if(n % i == 0) {
            cout << i << " ";
            if(n/i != i) cout << n/i << endl;
        }
    }
    return 0;
}