#include <bits/stdc++.h>
using namespace std;

vector<int> concatenateArray(vector<int> &a, vector<int> &b) {
    vector<int> c;
    c.insert(c.begin(), b.begin(), b.end());
    c.insert(c.end(), a.begin(), a.end());
    return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    // Reading array a
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Reading array b
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    vector<int> c = concatenateArray(a, b);
    // Print the elements of array C
    for (int i:c) 
        cout << i << " ";
    cout << endl;
    return 0;
}