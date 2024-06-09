#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // vector<int> v;
    // for(int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for(int el: v) {
    //     cout << el << " ";
    // }
    // cout << endl;

    // second
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int el: v) {
        cout << el << " ";
    }
    cout << endl;
    return 0;
}