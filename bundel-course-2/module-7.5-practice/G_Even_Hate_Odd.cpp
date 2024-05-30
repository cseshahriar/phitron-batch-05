#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        getchar();
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        getchar();
        if(n % 2 != 0) {
            cout << "-1" << endl;
        } else {
            int ans = 0;
            int odd_count = 0;
            int even_count = 0;
            for(int i = 0; i < n; i++) {
                if(a[i] % 2 != 0) {
                    odd_count++;
                } else {
                    even_count++;
                }
            }
            if (odd_count == even_count) {
                cout << "0" << endl;
            } else {
                cout << abs(odd_count - even_count) / 2 << endl;
            }
        }

    }
    return 0;
}