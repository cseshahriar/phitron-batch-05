#include <bits/stdc++.h>
using namespace std;

// cp algorithm
const int N = 1e5+5;
int parents[N];
int group_size[N];
int levels[N];

void dsu_init(int n) {
    for(int i = 0; i < n; i++) {
        parents [i] = -1;
        levels[i] = 0;
    }
}

int dsu_find(int node) { // o(log N)
    if(parents[node] == -1) {
        return node;
    }
    int leader = dsu_find(parents[node]);
    parents[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2) { // friendship node
      // bad
    // aktake leader secrifies korbe
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    parents[leaderA] = leaderB; // union
}

void dsu_union_level(int node1, int node2) { // friendship node
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(levels[leaderA] > levels[leaderB]) {
        parents[leaderB] = leaderA;
    } else if(levels[leaderB] > levels[leaderA]) {
        parents[leaderA] = leaderB;
    } else { // anyone secrifise
        parents[leaderA] = leaderB;
        levels[leaderB]++;
    }
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
// union by rank
// path compression

/**
 * two group
 * 3  6
 * 3  5
 * 2  4
 */
int main() {
    dsu_init(7); // 7 node
    dsu_union_level(1, 2); // make friend ship 1 and 2
    dsu_union_level(2, 3); // make friendship 2, 3
    // two group
    dsu_union_level(4, 5); // make friendship 2, 3
    dsu_union_level(5, 6); // make friendship 2, 3

    dsu_union_level(1, 4); // connect two group

    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;
    return 0;
}