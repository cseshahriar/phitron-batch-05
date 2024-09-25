#include <bits/stdc++.h>
using namespace std;
/**
6 6
0 1
0 2
0 3
1 4
3 5
3 2
*/
const int N = 1e5+5;  // 100005
vector<int> v[N];
bool vis[N];

void dfs(int src) {
    cout << src << endl; // visit source
    vis[src] = true; // make true for visited
    for(int child : v[src]) { // if not visit then visit
        if(vis[child] == false) {
            dfs(child);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e; // identifier cin is undefine ?
    while(e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}