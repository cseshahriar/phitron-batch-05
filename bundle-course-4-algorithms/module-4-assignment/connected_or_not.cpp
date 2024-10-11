#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-05/challenges

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        matrix[a][b] = 1;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if (matrix[a][b] == 1) {
            cout << "YES" << endl;
        } else if (a == b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}