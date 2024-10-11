#include <bits/stdc++.h>
using namespace std;
/**
7 8
0 1
1 2
3 4
4 5
5 6
6 3


4 3
0 1
1 2
0 3
*/

// cycle detect
// undirected          directed
// bfs dfs             bfs
const int N = 1e5+5;
bool vis[N];
vector<int> adj[N];
int parentArray[N];
bool ans;

void dfs(int parent) {
    vis[parent] = true;
    // cout << parent;
    for(int child : adj[parent]) {
        if(vis[child] == true && child != parentArray[parent]) {
            ans = true;
        }

        if(vis[child] == false) {
            parentArray[child] = parent;
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
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;

    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            dfs(i);
        }
    }

    if(ans) {
        cout << "Yes Cycle!" << endl;
    } else {
        cout << "No cycle" << endl;
    }
    return 0;
}