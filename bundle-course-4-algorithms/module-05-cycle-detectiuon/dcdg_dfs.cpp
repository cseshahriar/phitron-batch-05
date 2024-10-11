// 5-5 Detect Cycle in Directed Graph using DFS
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool vis[N];
bool pathVisit[N];
vector<int> adj[N];
bool ans;

// dfs
void dfs(int parent) {
    vis[parent] = true;
    pathVisit[parent] = true;
    // cout << parent << endl;
    for(int child : adj[parent]) {
        if(pathVisit[child]) {
            ans = true;
        }
        if(!vis[child]) {
            dfs(child);
        }
    }
    // kaj ses
    pathVisit[parent] = false;
}

int main() {
    int n, e; // e for edge/ connection
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a); // comment if directed
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    ans = false;
    for(int i=0; i < n; i++) {
        if(!vis[i]) {
            dfs(i);
        }
    }
    if(ans) cout << "cycle detected";
    else cout << "not cycle detected";
    return 0;
}