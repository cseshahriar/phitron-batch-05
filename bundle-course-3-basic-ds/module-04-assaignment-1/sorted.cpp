#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[i] = x;
            b[i] = x;
        }   
        sort(b.begin(), b.end());
        bool flag = true;
        for(int j=0; j < n; j++) {
            if(a[j] != b[j]) {
                flag = false;
                break;
            } 
        }
        if(flag == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}