#include <bits/stdc++.h>
using namespace std;

bool vis[20][20];  // Visited array
int dis[20][20];   // Distance array
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // Directions for BFS

int n, m;  // n = number of rows, m = number of columns
char grid[20][20]; // The grid

// Check if the cell (i, j) is valid
bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);  // Boundaries for valid cells
}

// BFS implementation to explore the grid from (si, sj)
void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;  // Start point has distance 0

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        int x = cur.first, y = cur.second;
        q.pop();

        // Explore all 4 directions
        for (int i = 0; i < 4; i++) {
            int ci = x + d[i].first;
            int cj = y + d[i].second;

            // Check if the new cell is valid and not visited
            if (valid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[x][y] + 1;  // Update distance
            }
        }
    }
}

int main() {
    cin >> n >> m;

    // Read the grid input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int si, sj;  // Starting point
    cin >> si >> sj;
    si--;  // Convert to 0-indexed
    sj--;  // Convert to 0-indexed

    // Initialize vis and dis arrays
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    bfs(si, sj);  // Perform BFS

    // Output the distance array to check the result
    cout << "Distance grid from (" << si+1 << ", " << sj+1 << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dis[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}