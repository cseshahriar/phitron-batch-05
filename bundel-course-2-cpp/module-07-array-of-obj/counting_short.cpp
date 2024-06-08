#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int counts[26] = {0};
    for(char c:s) {
        counts[c - 'a']++;
    }
    for(char i = 'a'; i <= 'z'; i++) {
        // cout  << i  << " = " << counts[i - 'a'] << endl;
        for(int j = 0; j < counts[i - 'a']; j++) {
            cout << i;
        }
    }
    return 0;
}