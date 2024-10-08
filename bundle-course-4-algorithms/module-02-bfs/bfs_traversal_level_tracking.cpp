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
7 8
8 9
0
 */
vector<int> v[1005];
bool vis[1005];

void bfs(int src, int des) {
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool paisi = false;

    while(!q.empty()) { // o(n)
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        // cout << par << endl;
        if(par == des) {
            cout << level << endl;
            paisi = true;
        }
        for(int child: v[par]) { // o(n)
            if(vis[child] == false) {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }
    if(paisi == false) {
        cout  << -1 << endl;
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
    bfs(src, 9);
    return 0;
}