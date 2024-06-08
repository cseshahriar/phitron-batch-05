#include <bits/stdc++.h>

using namespace std;

long long int* sort_it(int arr_size) {
    long long int* arr = new long long int[arr_size];
    for(int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + arr_size, greater<long long int>());
    return arr;
}

int main() {
    int n;
    cin >> n;
    long long int* a = sort_it(n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}