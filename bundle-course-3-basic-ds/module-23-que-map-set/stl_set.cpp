#include <bits/stdc++.h>
using namespace std;

// balance binary tree

// 1 Sorting
// 2  Duplicate
// 3 Search


int main() {
    set<int> s;
    int n;
    cin >> n;

    while(n--) {
        int x;
        cin >> x;
        s.insert(x); // o(lon N)
    }

    if(s.count(10)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    // reverse(s.begin(), s.end());
    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}