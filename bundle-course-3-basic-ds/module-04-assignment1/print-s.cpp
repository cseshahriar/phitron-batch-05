#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && i + j == n - 1) {
                // if n = 5, i==j and  i+j==last index hoy so 2+2==4(n-1) and  index 2 is the third element is center
                cout << "X";
            } else if (i == j) { // i,j == 0,0 / 1,1 2,2 3,3 4,4
                cout << "\\"; // one slahsh for escape
            } else if (i + j == n - 1) { // 0+4 == 4, 2+2 == 4
                cout << "/";
            } else { // i and j did not match then space
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}