#include <bits/stdc++.h>
using namespace std;
/**
*/
const int N = 1e5+5;
bool vis[N];
boot pathVisit[N];
vector<int> adj[N];

void dfs(int parent) {
    vis[parent] = true;
    cout << parent << endl;
    for(int child : adj[parent]) {
        if(!vis[child]) {
            dfs(child);
        }
    }
}

int main() {
    int n, e; // e for edge/ connection
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    // ans = false;

    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            dfs(i);
        }
    }

    // if(ans) {
    //     cout << "Yes Cycle!" << endl;
    // } else {
    //     cout << "No cycle" << endl;
    // }
    return 0;
}