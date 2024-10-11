#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool vis[N];
vector<int> adj[N];
int parentArray[N];
bool ans;
void bfs(int s) {
    queue<int> q;
    q.push(s); // push to q
    vis[s] = true; // vitsited el
    while(!q.empty()) {
        int parent = q.front();
        // cout << parent << endl; // print
        q.pop();
        for(int child: adj[parent]) { // visit na hoye takle visit
            // cycle detection
            if(vis[child] == true && parentArray[parent] != child) {
                ans = true;
            }

            if(!vis[child]) {
                vis[child] = true;
                parentArray[child] = parent;
                q.push(child);
            }
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
    for(int i=0;i < n; i++) {
        if(!vis[i]) {
            bfs(i);
        }
    }

    if(ans) {
        cout << "Yes Cycle!" << endl;
    } else {
        cout << "No cycle" << endl;
    }
    return 0;
}