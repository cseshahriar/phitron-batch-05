#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 1, 2, 4, 5, 2, 2, 2};
    // replace(v.begin(), v.end(), 2, 100);
    for(int i: v)
        cout << v[i] << " ";

    cout << endl;

    // find
    // vector<int>:: iterator it;
    auto it = find(v.begin(), v.end(), 4);
    if(it == v.end()) {
        cout << "Not found" << endl;
    } else {
        cout << "found" << endl;
    }
    return 0;
}