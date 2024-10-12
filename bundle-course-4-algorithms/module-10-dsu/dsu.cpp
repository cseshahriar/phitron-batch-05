#include <bits/stdc++.h>
using namespace std;

// cp algorithm
const int N = 1e5+5;
int parents[N];

void dsu_init(int n) {
    for(int i = 0; i < n; i++) {
        parents [i] = -1;
    }
    parents[1] = 3;
    parents[2] = 1;
}

int dsu_find(int node) { // o(log N)
    if(parents[node] == -1) {
        return node;
    }
    int leader = dsu_find(parents[node]);
    parents[node] = leader;
    return leader;
}

// path compression

int main() {
    int n;
    cin >> n;
    dsu_init(n);
    cout << dsu_find(0) << endl;
    cout << dsu_find(1) << endl;
    cout << dsu_find(2) << endl;
    cout << dsu_find(3) << endl;
    return 0;
}