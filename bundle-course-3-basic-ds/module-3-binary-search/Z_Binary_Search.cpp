#include <bits/stdc++.h>
using namespace std;
// binary search
// time limit 1 second

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for(int i = 0; i < n; i++) { // o(n)
        cin >> a[i];
    }
    
    sort(a, a + n); // sort

    while(q--) { // o(2)
        int x;
        cin >> x;
        bool flag = false;
        
        // binary search apply
        int l = 0;
        int r = n - 1;
        while(l<=r) {
            int mid_index = (l + r ) / 2;
            if(a[mid_index] == x) {
                flag = true;
                break;
            }

            if(x > a[mid_index]) {
                // to right
                l = mid_index + 1;
            } else {
                // to left
                r = mid_index - 1;
            }
        }
        
        if(flag == true) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }    
    return 0;
}