#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cout << " t " << t << endl;
    while(t--) {
        getchar();
        int n;
        cin >> n;
        int a[n];
        cout << " n " << n << endl;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        // int middle = n / 2;
        // int step = 0;
        // int event_count = 0;
        // int odd_count = 0;
        // for(int i = 0; i < n; i++) {
        //     if(a[i] % 2 == 0) 
        //         event_count++;
        //     else
        //         odd_count++;
        // }
        // step = abs(event_count - odd_count);
        // cout << step << endl;
        
    } 
    return 0;
}