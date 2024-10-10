#include <bits/stdc++.h>
using namespace std;
// negative cycle a valid answer nai
int const N = 1e5+5;
int dis[N]; // distance

/*
3 3
0 1 -1
1 2 2
2 0 -3
*/

class Edge {
    public:
    int u, v, c;
    Edge(int u, int v, int c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }

};

int main() {
    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    while(e--) {
        int u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u, v, c)); // directed
        // edgeList.push_back(Edge(v, u, c)); // if undirected commentout it
    }
    // print
    // for(Edge ed: edgeList) {
    //     cout << ed.u << " " << ed.v << " " << ed.c << endl;
    // }
    for(int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
    }

    dis[0] = 0; // src must 0
    // path relax n - 1 times
    // bellman ford logic
    for(int i=1; i <= n - 1; i++) { // complexity: o(v  + e)
        // path relax
        for(Edge ed: edgeList) {
            int u, v, c;
            u = ed.u; // 0 src node
            v = ed.v; // 2 to node
            c = ed.c; // 5  cost
            // if sum is cros int limit, if dis[u] is infinity
            if(dis[u] < INT_MAX && dis[u] + c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool cycle = false;
    // cycle detection
    for(Edge ed: edgeList) {
        int u, v, c;
        u = ed.u; // 0 src node
        v = ed.v; // 2 to node
        c = ed.c; // 5  cost
        // if sum is cros int limit, if dis[u] is infinity
        if(dis[u] < INT_MAX && dis[u] + c < dis[v]) {
            cycle = true; // after all node path relax, again relax means cycle
            break;
            dis[v] = dis[u] + c;
        }
    }
    if(cycle) {
        cout << "Cycle" << endl;
    } else {
        // distance print
        for(int i = 0; i < n; i++) {
            cout << i << " -> " << dis[i] << " " << endl;
        }
    }
    return 0;
}