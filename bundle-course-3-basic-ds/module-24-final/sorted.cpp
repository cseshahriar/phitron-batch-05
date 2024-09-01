#include <bits/stdc++.h>
using namespace std;

// asc ordering
// duplicate remove

int main() {
    int t;
    cin >> t;

    while(t--) { // asc
        int n;
        cin >> n;
        list<long long int> a;

        for(int i =0; i < n; i++) {
            long long int x;
            cin >> x;
            a.push_back(x);
        }

        a.sort();
        a.unique();

        for(auto it = a.begin(); it != a.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}