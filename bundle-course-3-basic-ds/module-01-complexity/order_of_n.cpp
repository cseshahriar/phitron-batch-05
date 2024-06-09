// #include <bits/stdc++.h>
// using namespace std;
// 10^7 possible

// 2 4 16 32 64

// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++) { // o(n)
//         cin >> a[i];
//     }
//     int s = 0;
//     for(int i = 0; i < n; i++) { // o(n)
//         s += a[i];
//     }
//     cout << s << endl;
//     // o(n+n) => o(2n) = o(n) 
//     // 2 is constant
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) { // o(n)
        cin >> a[i];
    }
    int s = 0;
    for(int i = 0; i < n; i++) { // o(n)
        if(a[i] % 2 == 0) {
            s += a[i];
        }
    }
    cout << s << endl;
    // o(n+n/2) => o(n+n) = O(2n) = o(n) 
    // 2 is constant
    return 0;
}