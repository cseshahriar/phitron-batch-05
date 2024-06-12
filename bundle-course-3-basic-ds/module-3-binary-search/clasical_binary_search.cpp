#include <bits/stdc++.h>
using namespace std;
// binary search

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++) { // o(n)
        cin >> a[i];
    }
    
    int x; // search item
    cin >> x;

    int l = 0; // first index
    int r = n - 1; // last index
    
    bool flag = false;
    while(l <= r) { // o(log n)
        int mid_index = (l+r) / 2; // int
        // mid is x ?
        if(a[mid_index] == x) {
            flag = true;
            break;
        }

        // x is left of mid or right of mid
        if(x > a[mid_index]) {
            // right of mid
            l = mid_index + 1;
        } else {
            // left of mid
            r = mid_index - 1;

        }
    }
    if(flag==true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}