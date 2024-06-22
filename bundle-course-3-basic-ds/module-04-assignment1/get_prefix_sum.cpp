#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i = 0; i < n; i++) { // o(n)
        cin >> a[i];
    }    

    vector<long long int> pefix_sum_arr(n);
    pefix_sum_arr[0] = a[0];
    for(int i = 1; i < n; i++) {
        pefix_sum_arr[i] = pefix_sum_arr[i-1] + a[i];
    }
    // reverse print
    for(int i = n - 1; i >= 0; i--) {
        cout << pefix_sum_arr[i] << " ";
    }
    return 0;
}