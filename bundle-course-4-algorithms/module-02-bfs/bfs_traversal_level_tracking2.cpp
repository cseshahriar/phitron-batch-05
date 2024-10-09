#include <bits/stdc++.h>
using namespace std;

// BFS Traversal Implementation
/**
10 8
0 1
1 2
0 4
1 3
2 0
3 4
1 5
3 6
*/

vector<int> v[1005];
bool vis[1005];
int levels[1005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    levels[src] = 0;

    while(!q.empty()) { // o(n)
        int par = q.front();
        q.pop();
        cout << par << endl;
        for(int child: v[par]) { // o(n)
            if(vis[child] == false) {
                q.push(child);
                vis[child] = true;
                levels[child] = par + 1;
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
    cout << endl;
    for(int i=0; i < n; i++) {
        cout << "level " << i << " of " << levels[i] << endl;
    }
    return 0;
}