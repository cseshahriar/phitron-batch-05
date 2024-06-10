#include <bits/stdc++.h>
using namespace std;

void concatenation_array(int a[], int b[], int c[], int n) {
    // copy element of b to c
    for(int i = 0; i < n; i++) {
        c[i] = b[i];
    }

     // copy element of b to c
    for(int i = 0; i < n; i++) {
        c[n + i] = a[i];
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];
    int c[n*2];
    
    // a input
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // b input
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

   concatenation_array(a, b, c, n);

    // print
    for(int i = 0; i < n * 2; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}