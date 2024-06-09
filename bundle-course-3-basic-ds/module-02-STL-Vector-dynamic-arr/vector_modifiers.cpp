#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x = {10, 20, 30};
    vector<int> v = {1, 2, 3, 4, 5};
    // v = x; // o(1)
    x.pop_back(); // remove 3
    // x.insert(x.begin() + 1, 100);
    x.insert(x.begin(), v.begin(), v.end());
    for(int i: x)
        cout << i << endl;

    cout << endl;

    // v.erase(v.begin() + 3); // single value erase
    v.erase(v.begin() + 1, v.begin() + 3); // mul value erase
    for(int i: v)
        cout << i << endl;

    return 0;
}