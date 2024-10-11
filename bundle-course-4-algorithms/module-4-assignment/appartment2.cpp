#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> v;
bool vis[1000][1000];
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int dfs(int i, int j) {
    vis[i][j] = true;
    int room_count = 1;
    for (auto dir : directions) {
        int ni = i + dir.first;
        int nj = j + dir.second;
        if (ni >= 0 && ni < n && nj >= 0 && nj < m && v[ni][nj] == '.' && !vis[ni][nj]) {
            room_count += dfs(ni, nj);
        }
    }
    return room_count;
}

int main() {
    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    memset(vis, false, sizeof(vis));
    vector<int> apartment_sizes;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '.' && !vis[i][j]) {
                int size = dfs(i, j);
                apartment_sizes.push_back(size);
            }
        }
    }
    sort(apartment_sizes.begin(), apartment_sizes.end());
    if (apartment_sizes.empty()) {
        return 0;
    }
    for (int size : apartment_sizes) {
        cout << size << " ";
    }
    cout << endl;
    return 0;
}
