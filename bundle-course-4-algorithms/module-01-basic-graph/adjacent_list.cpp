#include <bits/stdc++.h>
using namespace std;
/**
 6 6
 0 1
 1 5
 0 4
 0 3
 3 4
 2 4
*/
int main() {
    int n, e;
    cin >> n >> e;
    vector<int > mat[n];
    while(e--) {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    vector<int> v;
    for(int i=0; i< mat[3].size(); i++) {
        cout << mat[3][i] << " ";
    }
    cout << endl;
    return 0;
}