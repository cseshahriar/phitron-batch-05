#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(2);
    cout << " size " << v.size() << endl;
    cout << " max size " << v.max_size() << endl;
    cout << " capacity " << v.capacity() << endl;
    v.push_back(10);
    v.resize(1);
    cout << " capacity " << v.capacity() << endl;
    // capacity increase by double
    // clear values
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}