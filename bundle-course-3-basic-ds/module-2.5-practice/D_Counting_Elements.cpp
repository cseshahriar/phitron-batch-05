#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<int> a(n);
    for(int i=0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for(int i=0; i < n; i++) {
        if(a[i] > 0) {
            for(int j = 0; j < n; j++) {
                if(a[i] + 1 == a[j])
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}