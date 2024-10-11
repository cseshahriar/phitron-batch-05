#include <bits/stdc++.h>
using namespace std;
/**
 *  6 6
 0 1
 1 5
 0 4
 0 3
 3 4
 2 4
 */
int main() {
    int n, e; // e means edge
    cin >> n >> e;
    vector<pair<int, int>> v;

    while(e--) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b}); // undirected
    }

    for(int i=0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    // output
    cout << endl;
    for(pair<int, int> p:v) {
        cout << p.first << " " << p.second << endl;
    }

    // output
    cout << endl;
    for(auto p:v) {
        cout << p.first << " " << p.second << endl;
    }
}