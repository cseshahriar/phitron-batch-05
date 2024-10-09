#include <bits/stdc++.h>
using namespace std;
// single source shortest path algo
// single source means source is always one
// bfs is single source shortest path algorithm
// naive version no visited, can visit multiple time
// if path relaxable then go, bfs
// distance array, init max val

// source theke other node a jete koto min kost ***
const int N = 100;
vector<pair<int, int>> v[N];
int dis[N];

// nieve version
void dijkstra(int src) { // O(n * e)
    // src, prest cost
    queue<pair<int, int>> q;
    // first src
    q.push({src, 0});
    dis[src] = 0;

    while(!q.empty()) {
        // come parent node
        pair<int, int> parent = q.front(); // top
        q.pop();
        int node = parent.first;
        int cost = parent.second;
        for(pair<int, int> child: v[node]) {
            int childNode = child.first;
            int childCost = child.second;
            // parent costn and child ar kace joar cost
            int pathCost = cost + childCost;
            if(pathCost < dis[childNode]) {
                dis[childNode] = pathCost; // path relax
                q.push({childNode,  dis[childNode]}); // updated min cost distance
            }
        }
    }
}


int main() {
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b, c; // a to b and c is cost
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    // memset(dis, INT_MAX, sizeof(dis)); memset not working
    for(int i=0; i < n; i++) {
        dis[i] = INT_MAX;
    }
    dijkstra(0);

    // min cost of every node
    for(int i=0; i < n; i++) {
        cout << i << "-> " << dis[i] << endl;
    }
    return 0;
}