#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    cout << v[v.size() - 1 ] << endl; // last el
    cout << v.back() << endl; // last el
    
    cout << v[0] << endl; // first el
    cout << v.front() << endl; // first el

    // iterator
    cout << endl;
    vector<int>::iterator it;
    for(it=v.begin(); it < v.end(); it++) {
        cout << *it << endl;
    }

    cout << endl;
    for(auto itt=v.begin(); itt < v.end(); itt++) {
        cout << *itt << endl;
    }
    return 0;
}