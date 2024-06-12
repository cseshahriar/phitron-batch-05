#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) { // o(n)
        cin >> a[i];
    }

    cin >> q;
    while(q--) { // o(q)
        int x;
        cin >> x;
        bool flag = false;

        for(int j = 0; j < n; j++) { // linear search worst case O(n)
            if(x == a[j]) {
                flag = true;
                break;
            }
        }

        if(flag == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    // complexity is O(q * n)
    return 0;
}