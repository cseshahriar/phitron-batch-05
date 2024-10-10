#include <bits/stdc++.h>
#define ll long long int
using namespace std;
// bfs, dijkstra, bellmand is single source shortest path algo
// why floyd wasrshall: multi source shortest path

// o(v^4)
// all pair shrtest path algo
// proti ta not a jabo oono karo maddomay

/*
4 6
3 2 8
2 1 5
1 0 2
3 0 20
0 1 3
1 2 2
*/

int main() {
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];

    // init
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            adj[i][j] = INT_MAX;
            if(i == j) {
                adj[i][j] = 0; // replate inf to 0
            }
        }
    }

    // input
    while(e--) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c; // directed
        // adj[b][a] = c; // undirected
    }

    // balma
    for(int k=0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j=0; j < n; j++) {
                // cout << i << " " << k << " " << j << endl;
                if(adj[i][k] + adj[k][j] < adj[i][j]) {
                    // i theke k and k theke j jodi < current val
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    // shortest path
    cout << endl << endl << "After" << endl;
    for(int i = 0; i < n; i++) {
        for(int j=0; j < n; j++) {
            if(adj[i][j] == INT_MAX) {
                cout << "INF ";
            } else {
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }

    bool cycle = false;
    // cycle
    for(int i = 0; i < n; i++) {
        if(adj[i][i] < 0) {
            cycle = true;
            break;
        }
    }
    if(cycle) {
        cout << "Cycle detected" << endl;
    } else {
        cout << "No Cycle" << endl;
    }
    return 0;
}