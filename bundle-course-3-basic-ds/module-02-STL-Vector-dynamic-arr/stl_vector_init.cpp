#include <bits/stdc++.h>
using namespace std;

// dynamic array = vector

int main() {
    // vector<int> v; // vector with zero el
    vector<int> v(5, 1); // 5 size vector, and 5 time 1 el
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;

    // copy
    // vector<int> v2(v);
    vector<int> v2 = {1, 10, 4};

    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << v2.size() << endl;
    return 0;
}  