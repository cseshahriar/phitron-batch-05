#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-05/challenges

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int node;
        cin >> node;
        if (v[node].empty()) {
            cout << -1 << endl;
        } else {
            sort(v[node].rbegin(), v[node].rend());
            for (int j = 0; j < (int)v[node].size(); j++) {
                cout << v[node][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
