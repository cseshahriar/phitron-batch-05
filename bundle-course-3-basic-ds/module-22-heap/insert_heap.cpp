#include <bits/stdc++.h>
using namespace std;

int main() { // n log(N)
    // lon(n)
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i < n; i++) { // n
        int x;
        cin >> x;
        v.push_back(x);
        int cur_index = v.size() - 1;
        while(cur_index != 0) { // log(n)
            int parent_index = (cur_index - 1) / 2;
            if (v[parent_index] < v[cur_index]) {
                swap(v[parent_index], v[cur_index]);
            } else {
                break;
            }
            cur_index = parent_index;
        }
    }

    for(int val: v) cout << val << " ";
    cout << endl;
    return 0;
}