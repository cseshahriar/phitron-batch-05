#include <bits/stdc++.h>
using namespace std;

// 2-2 BFS Traversal Implementation
// BFS Traversal: Single sourece shortest path sltorithm
//    1. Traverse
//    2. Level - shortest path
//    3. path printity : cost
//    4. taks

/**
5 6 max node 5, 6 node edge/connection
0 1 // source
1 2
0 4
1 3
2 0
3 4
0
*/

vector<int> v[1005];  // graph / adjacency list
bool vis[1005]; // visit


void bfs(int src) { // O(v+E)
    queue<int> q;
    q.push(src);
    vis[src] = true; // push in q and visit true

    // visit the graph of vector
    while(!q.empty()) { // o(n)
        int par = q.front(); // parent or front
        q.pop(); // node del
        cout << par << endl;
        for(int child: v[par]) { // o(n), get src ar children
            if(vis[child] == false) {
                q.push(child);
                vis[child] = true; // visit true,n(n^2)
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs(src);
    return 0;
}