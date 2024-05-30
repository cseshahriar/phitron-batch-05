#include <bits/stdc++.h>
using namespace std;

void sum(int x, int n) {
    long long s = 0;
    for(int i = 0; i < n; i = i + 2) {
        if(i == 0) {
            s += (1 - 1);
        } else {
            int pow_of_x = 1;
            for(int j = 0; j < i; j++) { 
                pow_of_x *= x;
            }
            s += pow_of_x;
        }
    }
    cout << s << endl;
}

int main() {
    int x, n;
    cin >> x >> n;
    long long int s = 0;
    sum(x, n);
    return 0;
}