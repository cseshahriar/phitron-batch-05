#include <bits/stdc++.h>
using namespace std;
/**
 6 6
 0 1 means zero index ar vector a 1 push back
 1 5
 0 4
 0 3
 3 4
 2 4

 v[connection, value]

2d array
 0 1 2 3 4 5

 1 0 4 0 0 1
 4 5   4 3
 3       2
*/
int main() {
    int n, e;
    cin >> n >> e;
    vector<int > mat[n];
    while(e--) {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b); // 0 1
        mat[b].push_back(a); // 1 0 // if directed it's not need
    }
    for(int i=0; i< mat[3].size(); i++) { // matrix ar v 3 ar sob value print koro
        cout << mat[3][i] << " "; // 0 4
    }
    cout << endl;
    return 0;
}