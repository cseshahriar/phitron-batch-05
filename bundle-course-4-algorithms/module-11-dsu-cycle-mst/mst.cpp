#include <bits/stdc++.h>
using namespace std;

// Minimum Spanning Tree (MST)
// Kruskals algo of mst

const int N = 135+5;
int parents[N];
int group_size[N];

void dsu_init(int n){
    for(int i = 0; i < n; i++) {
        parents[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if(parents[node] == -1) return node; // it self a leader
    int leader = dsu_find(parents[node]);
    parents[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB]) {
        parents[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    } else {
        parents[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

class Edge {
    public:
        int u, v, w;
        Edge(int u, int v, int w) {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};


bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int main() {
    int n, e;
    cin >> n >> e;
    dsu_init(n);
    vector<Edge> edgeList;
    while(e--) {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    int totalCost = 0;
    for (Edge ed: edgeList)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if(leaderU == leaderV) {
            continue;
        } else {
            dsu_union_by_size(ed.u, ed.v);
            totalCost+= ed.w;
        }
    }
    cout << totalCost << endl;
    return 0;
}