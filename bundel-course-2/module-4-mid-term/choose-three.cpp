#include <bits/stdc++.h>

using namespace std;

bool is_match_sum(int a[], int n, int s) {
    sort(a, a + n);
    for(int i = 0; i < n - 2; i++) {
        // i is the first el
        int first = i;
        int left = i + 1; // second el 
        int right = n - 1; // last el
        while(left < right) {
            int c_sum = a[i] + a[left] + a[right];
            if(c_sum == s) {
                return true;
            } else if (c_sum < s) {
                left++;
            } else {
                right--;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s;
        cin >> n >> s;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if(is_match_sum(a, n, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}