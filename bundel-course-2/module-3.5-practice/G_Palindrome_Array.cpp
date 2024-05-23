#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int a[n];
    long long int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    bool flag = true;
    for (int i = 0; i < n / 2; i++) { // first half to last half comparision
        if (a[i] != a[n - i - 1]) {  // first el and last el 
            // 4
            // 1 2 3 4
            // compare first el and last el 1 == 4?
            // second el second last el first 2 == 3?

            // 5
            // 1 3 2 3 1
            // 1 == 1?
            // 3 == 3?
            // 2 == 2?
            flag = false;
            break;
        }
    }
    
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}