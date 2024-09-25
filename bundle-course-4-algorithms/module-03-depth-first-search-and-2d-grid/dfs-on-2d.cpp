#include <bits/stdc++.h>
using namespace std;

char a[20][20];
bool vis[20][20];
vector<pair<int, int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
int m, n;

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m)  {
        return false;
    } else {
        return true;
    }
}

void dfs(int si, int sj) { // O(n*m)
    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for(int i=0; i < 4; i++) {
        //    cout << d[i].first << " " << d[i].second << endl;
        int ci = si + d[i].first;
        int cj = si + d[i].second;
        if(vis[ci][cj] == false && valid(ci, cj) == true) {
            dfs(ci, cj);
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    return 0;
}