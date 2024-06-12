#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) { // o(n)
        cin >> a[i];
    }
    
    int sum_arr[n];
    
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j=0; j < i + 1; j++) {
            sum += a[j];
        }
        sum_arr[i] = sum; 
    }
    for(int i = 0; i < n; i++) { // o(n)
        cout << sum_arr[i] << " ";
    }
    return 0;
}