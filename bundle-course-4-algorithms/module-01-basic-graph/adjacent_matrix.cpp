#include <bits/stdc++.h>
using namespace std;

/**
6 6
0 1
1 5
0 4
0 3
3 4
2 4
*/

// undirected graph 0 1
// directed 1 0

int main() {
    int n, e;
    cin >> n >> e;

    int mat[n][n];
    memset(mat, 0, sizeof(mat)); // initialize with 0

    // print
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    while(e--) {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    if(mat[3][1] == 1) {
        cout << "Connection ache";
    } else {
        cout << "Connection nai";
    }

    cout << endl;
    if(mat[3][4] == 1) {
        cout << "Connection ache";
    } else {
        cout << "Connection nai";
    }
    cout << endl;
    return 0;
}