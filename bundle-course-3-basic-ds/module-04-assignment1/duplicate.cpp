#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> a(n);

    // read data
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    bool has_duplicate = false;
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i-1]) { // a[1] == a[0]? a[2] == a[1] ?
            has_duplicate = true;
            break;
        }
    }
    
    if(has_duplicate == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}