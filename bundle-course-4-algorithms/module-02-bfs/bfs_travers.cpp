#include <bits/stdc++.h>
using namespace std;

// BFS Traversal Implementation

/**
5 6
0 1
1 2
0 4
1 3
2 0
3 4
0
*/

vector<int> v[1005];
bool vis[1005];

void bfs(int src) { // O(v+E)
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()) { // o(n)
        int par = q.front();
        q.pop();
        cout << par << endl;
        for(int child: v[par]) { // o(n)
            if(vis[child] == false) {
                q.push(child);
                vis[child] = true; // n(n^2)
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