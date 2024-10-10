#include <bits/stdc++.h>
using namespace std;
// bfs not work for weighted
// why need this : directed and waighted
// n-1 path relix
// edge list
// weight directed graph

/*
4 4
0 2 5
0 3 12
2 1 2
1 3 3

4 4
1 3 -3
0 3 5
2 1 1
0 2 -2
*/

int const N = 1e5+5;
int dis[N]; // distance

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
        edgeList.push_back(Edge(u, v, c));
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


    // distance print
    for(int i = 0; i < n; i++) {
        cout << i << " -> " << dis[i] << " " << endl;
    }
    return 0;
}