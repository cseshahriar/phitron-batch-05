#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
bool vis[1000][1000];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void dfs(int i, int j) {
    vis[i][j] = true;
    for (auto dir : v) {
        int ni = i + dir.first;
        int nj = j + dir.second;
        if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '.' && !vis[ni][nj]) {
            dfs(ni, nj);
        }
    }
}

int main() {
    cin >> n >> m;
    grid.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    memset(vis, false, sizeof(vis));
    int apartment_count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                apartment_count++;
                dfs(i, j);
            }
        }
    }
    cout << apartment_count << endl;
    return 0;
}
