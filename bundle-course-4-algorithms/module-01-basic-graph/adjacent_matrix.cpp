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
// undirected graph 0 1: direction bola nai
// directed 1 0

int main() {
    int n, e; // matrix size
    cin >> n >> e;
    int mat[n][n]; // matrix
    memset(mat, 0, sizeof(mat)); // initialize with 0

    // print
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // make connection
    while(e--) {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1; // 0 1
        mat[b][a] = 1; // 1 0 // undirected graph ulta connection hoy
    }

    // print
    cout << endl;
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // found connection
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