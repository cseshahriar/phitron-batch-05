#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[20][20];
char grid[20][20];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j) {
    return (
        i >= 0 && i < n && j >= 0 && j < m && (
            grid[i][j] == '.' || grid[i][j] == 'B'
        )
    );
}

// Check if the cell (i, j) is valid
bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);  // Boundaries for valid cells
}

bool bfs(int si, int sj, int end_x, int end_y) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        int x = cur.first, y = cur.second;
        q.pop();

        if (x == end_x && y == end_y) {
            return true;
        }
        for (int i = 0; i < 4; i++) {
            int ci = x + d[i].first;
            int cj = y + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj]) {
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    pair<int, int> start, end;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                start = {i, j};
            } else if (grid[i][j] == 'B') {
                end = {i, j};
            }
        }
    }
    memset(vis, false, sizeof(vis));
    if (bfs(start.first, start.second, end.first, end.second)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
