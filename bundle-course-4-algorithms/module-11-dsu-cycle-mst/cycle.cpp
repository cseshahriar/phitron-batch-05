#include <bits/stdc++.h>
using namespace std;

/**
6 6
0 1
0 2
0 3
3 4
3 5
4 5
*/

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

int main() {
    int n, e;
    cin >> n >> e;
    dsu_init(n);
    bool cycle = false;
    while(e--) {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA == leaderB) {
            cycle = true;
        } else {
            dsu_union_by_size(a, b);
        }
    }

    if(cycle) {
        cout <<"Cycle" << endl;
    } else {
        cout << "No cycle" << endl;
    }
    return 0;
}